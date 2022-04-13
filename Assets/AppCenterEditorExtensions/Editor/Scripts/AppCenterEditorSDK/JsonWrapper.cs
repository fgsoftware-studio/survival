namespace AppCenterEditor
{
    public class JsonWrapper
    {
        /// <summary>
        ///     Use this property to override the Serialization for the SDK.
        /// </summary>
        public static ISerializer Instance { get; set; } = new SimpleJsonInstance();

        public static T DeserializeObject<T>(string json)
        {
            return Instance.DeserializeObject<T>(json);
        }

        public static T DeserializeObject<T>(string json, object jsonSerializerStrategy)
        {
            return Instance.DeserializeObject<T>(json, jsonSerializerStrategy);
        }

        public static object DeserializeObject(string json)
        {
            return Instance.DeserializeObject(json);
        }

        public static string SerializeObject(object json)
        {
            return Instance.SerializeObject(json);
        }

        public static string SerializeObject(object json, object jsonSerializerStrategy)
        {
            return Instance.SerializeObject(json, jsonSerializerStrategy);
        }
    }
}