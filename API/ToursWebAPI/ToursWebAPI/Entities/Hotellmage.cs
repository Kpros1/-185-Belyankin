//------------------------------------------------------------------------------
// <auto-generated>
//     Этот код создан по шаблону.
//
//     Изменения, вносимые в этот файл вручную, могут привести к непредвиденной работе приложения.
//     Изменения, вносимые в этот файл вручную, будут перезаписаны при повторном создании кода.
// </auto-generated>
//------------------------------------------------------------------------------

namespace ToursWebAPI.Entities
{
    using System;
    using System.Collections.Generic;
    
    public partial class Hotellmage
    {
        public int id { get; set; }
        public int Hotelid { get; set; }
        public byte[] ImagesSource { get; set; }
    
        public virtual Hotel Hotel { get; set; }
    }
}
