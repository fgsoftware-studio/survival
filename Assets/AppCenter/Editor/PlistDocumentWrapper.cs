// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

using System;
using System.Reflection;

public class PlistDocumentWrapper
{
    private readonly object _plistDocument;
    private readonly string _path;
    private static readonly Type PlistDocumentType;

    static PlistDocumentWrapper()
    {
        var xcExtensionsAssembly = Assembly.Load("UnityEditor.iOS.Extensions.Xcode");
        if (xcExtensionsAssembly != null)
            PlistDocumentType = xcExtensionsAssembly.GetType("UnityEditor.iOS.Xcode.PlistDocument");
    }

    public static bool PlistDocumentIsAvailable => PlistDocumentType != null;

    public PlistDocumentWrapper(string path)
    {
        _path = path;
        _plistDocument = PlistDocumentType.GetConstructor(Type.EmptyTypes).Invoke(null);
        PlistDocumentType.GetMethod("ReadFromFile").Invoke(_plistDocument, new[] {_path});
    }

    public object GetRoot()
    {
        return PlistDocumentType.GetField("root").GetValue(_plistDocument);
    }

    public void WriteToFile()
    {
        PlistDocumentType.GetMethod("WriteToFile").Invoke(_plistDocument, new[] {_path});
    }
}