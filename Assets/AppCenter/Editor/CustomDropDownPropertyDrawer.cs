// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

[CustomPropertyDrawer(typeof(CustomDropDownPropertyAttribute))]
public class CustomDropDownPropertyDrawer : PropertyDrawer
{
    private bool _initialized;
    private object[] _attributes;
    private readonly Dictionary<string, int> _optionsDictionary = new Dictionary<string, int>();
    private string[] _options;
    private int _selectedIndex;

    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        if (!_initialized)
        {
            _attributes = fieldInfo.GetCustomAttributes(typeof(CustomDropDownPropertyAttribute), false);
            foreach (var itemAttribute in _attributes)
            {
                var customPropertyAttribute = itemAttribute as CustomDropDownPropertyAttribute;
                _optionsDictionary.Add(customPropertyAttribute.SelectedKey, customPropertyAttribute.SelectedValue);
                if (customPropertyAttribute.SelectedValue == AppCenterSettingsContext.SettingsInstance.UpdateTrack)
                    _selectedIndex = ArrayUtility.IndexOf(_attributes, itemAttribute);
            }

            _options = _optionsDictionary.Keys.ToArray();
            _initialized = true;
        }

        _selectedIndex = EditorGUI.Popup(position, property.displayName, _selectedIndex, _options);
        property.intValue = _optionsDictionary[_options[_selectedIndex]];
    }
}