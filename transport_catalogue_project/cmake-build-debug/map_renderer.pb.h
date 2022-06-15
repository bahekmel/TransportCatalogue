// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map_renderer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_map_5frenderer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_map_5frenderer_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "svg.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_map_5frenderer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_map_5frenderer_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_map_5frenderer_2eproto;
namespace serialize {
class RenderSettings;
struct RenderSettingsDefaultTypeInternal;
extern RenderSettingsDefaultTypeInternal _RenderSettings_default_instance_;
}  // namespace serialize
PROTOBUF_NAMESPACE_OPEN
template<> ::serialize::RenderSettings* Arena::CreateMaybeMessage<::serialize::RenderSettings>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace serialize {

// ===================================================================

class RenderSettings final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:serialize.RenderSettings) */ {
 public:
  inline RenderSettings() : RenderSettings(nullptr) {}
  ~RenderSettings() override;
  explicit constexpr RenderSettings(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RenderSettings(const RenderSettings& from);
  RenderSettings(RenderSettings&& from) noexcept
    : RenderSettings() {
    *this = ::std::move(from);
  }

  inline RenderSettings& operator=(const RenderSettings& from) {
    CopyFrom(from);
    return *this;
  }
  inline RenderSettings& operator=(RenderSettings&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RenderSettings& default_instance() {
    return *internal_default_instance();
  }
  static inline const RenderSettings* internal_default_instance() {
    return reinterpret_cast<const RenderSettings*>(
               &_RenderSettings_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RenderSettings& a, RenderSettings& b) {
    a.Swap(&b);
  }
  inline void Swap(RenderSettings* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RenderSettings* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RenderSettings* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RenderSettings>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RenderSettings& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RenderSettings& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RenderSettings* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "serialize.RenderSettings";
  }
  protected:
  explicit RenderSettings(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kColorPaletteFieldNumber = 12,
    kBusLabelOffsetFieldNumber = 7,
    kStopLabelOffsetFieldNumber = 9,
    kUnderlayerColorFieldNumber = 10,
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
    kPaddingFieldNumber = 3,
    kStopRadiusFieldNumber = 4,
    kLineWidthFieldNumber = 5,
    kBusLabelFontSizeFieldNumber = 6,
    kStopLabelFontSizeFieldNumber = 8,
    kUnderlayerWidthFieldNumber = 11,
  };
  // repeated .serialize.Color color_palette = 12;
  int color_palette_size() const;
  private:
  int _internal_color_palette_size() const;
  public:
  void clear_color_palette();
  ::serialize::Color* mutable_color_palette(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::serialize::Color >*
      mutable_color_palette();
  private:
  const ::serialize::Color& _internal_color_palette(int index) const;
  ::serialize::Color* _internal_add_color_palette();
  public:
  const ::serialize::Color& color_palette(int index) const;
  ::serialize::Color* add_color_palette();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::serialize::Color >&
      color_palette() const;

  // .serialize.Point bus_label_offset = 7;
  bool has_bus_label_offset() const;
  private:
  bool _internal_has_bus_label_offset() const;
  public:
  void clear_bus_label_offset();
  const ::serialize::Point& bus_label_offset() const;
  PROTOBUF_NODISCARD ::serialize::Point* release_bus_label_offset();
  ::serialize::Point* mutable_bus_label_offset();
  void set_allocated_bus_label_offset(::serialize::Point* bus_label_offset);
  private:
  const ::serialize::Point& _internal_bus_label_offset() const;
  ::serialize::Point* _internal_mutable_bus_label_offset();
  public:
  void unsafe_arena_set_allocated_bus_label_offset(
      ::serialize::Point* bus_label_offset);
  ::serialize::Point* unsafe_arena_release_bus_label_offset();

  // .serialize.Point stop_label_offset = 9;
  bool has_stop_label_offset() const;
  private:
  bool _internal_has_stop_label_offset() const;
  public:
  void clear_stop_label_offset();
  const ::serialize::Point& stop_label_offset() const;
  PROTOBUF_NODISCARD ::serialize::Point* release_stop_label_offset();
  ::serialize::Point* mutable_stop_label_offset();
  void set_allocated_stop_label_offset(::serialize::Point* stop_label_offset);
  private:
  const ::serialize::Point& _internal_stop_label_offset() const;
  ::serialize::Point* _internal_mutable_stop_label_offset();
  public:
  void unsafe_arena_set_allocated_stop_label_offset(
      ::serialize::Point* stop_label_offset);
  ::serialize::Point* unsafe_arena_release_stop_label_offset();

  // .serialize.Color underlayer_color = 10;
  bool has_underlayer_color() const;
  private:
  bool _internal_has_underlayer_color() const;
  public:
  void clear_underlayer_color();
  const ::serialize::Color& underlayer_color() const;
  PROTOBUF_NODISCARD ::serialize::Color* release_underlayer_color();
  ::serialize::Color* mutable_underlayer_color();
  void set_allocated_underlayer_color(::serialize::Color* underlayer_color);
  private:
  const ::serialize::Color& _internal_underlayer_color() const;
  ::serialize::Color* _internal_mutable_underlayer_color();
  public:
  void unsafe_arena_set_allocated_underlayer_color(
      ::serialize::Color* underlayer_color);
  ::serialize::Color* unsafe_arena_release_underlayer_color();

  // double width = 1;
  void clear_width();
  double width() const;
  void set_width(double value);
  private:
  double _internal_width() const;
  void _internal_set_width(double value);
  public:

  // double height = 2;
  void clear_height();
  double height() const;
  void set_height(double value);
  private:
  double _internal_height() const;
  void _internal_set_height(double value);
  public:

  // double padding = 3;
  void clear_padding();
  double padding() const;
  void set_padding(double value);
  private:
  double _internal_padding() const;
  void _internal_set_padding(double value);
  public:

  // double stop_radius = 4;
  void clear_stop_radius();
  double stop_radius() const;
  void set_stop_radius(double value);
  private:
  double _internal_stop_radius() const;
  void _internal_set_stop_radius(double value);
  public:

  // double line_width = 5;
  void clear_line_width();
  double line_width() const;
  void set_line_width(double value);
  private:
  double _internal_line_width() const;
  void _internal_set_line_width(double value);
  public:

  // int32 bus_label_font_size = 6;
  void clear_bus_label_font_size();
  int32_t bus_label_font_size() const;
  void set_bus_label_font_size(int32_t value);
  private:
  int32_t _internal_bus_label_font_size() const;
  void _internal_set_bus_label_font_size(int32_t value);
  public:

  // int32 stop_label_font_size = 8;
  void clear_stop_label_font_size();
  int32_t stop_label_font_size() const;
  void set_stop_label_font_size(int32_t value);
  private:
  int32_t _internal_stop_label_font_size() const;
  void _internal_set_stop_label_font_size(int32_t value);
  public:

  // double underlayer_width = 11;
  void clear_underlayer_width();
  double underlayer_width() const;
  void set_underlayer_width(double value);
  private:
  double _internal_underlayer_width() const;
  void _internal_set_underlayer_width(double value);
  public:

  // @@protoc_insertion_point(class_scope:serialize.RenderSettings)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::serialize::Color > color_palette_;
  ::serialize::Point* bus_label_offset_;
  ::serialize::Point* stop_label_offset_;
  ::serialize::Color* underlayer_color_;
  double width_;
  double height_;
  double padding_;
  double stop_radius_;
  double line_width_;
  int32_t bus_label_font_size_;
  int32_t stop_label_font_size_;
  double underlayer_width_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_map_5frenderer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RenderSettings

// double width = 1;
inline void RenderSettings::clear_width() {
  width_ = 0;
}
inline double RenderSettings::_internal_width() const {
  return width_;
}
inline double RenderSettings::width() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.width)
  return _internal_width();
}
inline void RenderSettings::_internal_set_width(double value) {
  
  width_ = value;
}
inline void RenderSettings::set_width(double value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.width)
}

// double height = 2;
inline void RenderSettings::clear_height() {
  height_ = 0;
}
inline double RenderSettings::_internal_height() const {
  return height_;
}
inline double RenderSettings::height() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.height)
  return _internal_height();
}
inline void RenderSettings::_internal_set_height(double value) {
  
  height_ = value;
}
inline void RenderSettings::set_height(double value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.height)
}

// double padding = 3;
inline void RenderSettings::clear_padding() {
  padding_ = 0;
}
inline double RenderSettings::_internal_padding() const {
  return padding_;
}
inline double RenderSettings::padding() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.padding)
  return _internal_padding();
}
inline void RenderSettings::_internal_set_padding(double value) {
  
  padding_ = value;
}
inline void RenderSettings::set_padding(double value) {
  _internal_set_padding(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.padding)
}

// double stop_radius = 4;
inline void RenderSettings::clear_stop_radius() {
  stop_radius_ = 0;
}
inline double RenderSettings::_internal_stop_radius() const {
  return stop_radius_;
}
inline double RenderSettings::stop_radius() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.stop_radius)
  return _internal_stop_radius();
}
inline void RenderSettings::_internal_set_stop_radius(double value) {
  
  stop_radius_ = value;
}
inline void RenderSettings::set_stop_radius(double value) {
  _internal_set_stop_radius(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.stop_radius)
}

// double line_width = 5;
inline void RenderSettings::clear_line_width() {
  line_width_ = 0;
}
inline double RenderSettings::_internal_line_width() const {
  return line_width_;
}
inline double RenderSettings::line_width() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.line_width)
  return _internal_line_width();
}
inline void RenderSettings::_internal_set_line_width(double value) {
  
  line_width_ = value;
}
inline void RenderSettings::set_line_width(double value) {
  _internal_set_line_width(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.line_width)
}

// int32 bus_label_font_size = 6;
inline void RenderSettings::clear_bus_label_font_size() {
  bus_label_font_size_ = 0;
}
inline int32_t RenderSettings::_internal_bus_label_font_size() const {
  return bus_label_font_size_;
}
inline int32_t RenderSettings::bus_label_font_size() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.bus_label_font_size)
  return _internal_bus_label_font_size();
}
inline void RenderSettings::_internal_set_bus_label_font_size(int32_t value) {
  
  bus_label_font_size_ = value;
}
inline void RenderSettings::set_bus_label_font_size(int32_t value) {
  _internal_set_bus_label_font_size(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.bus_label_font_size)
}

// .serialize.Point bus_label_offset = 7;
inline bool RenderSettings::_internal_has_bus_label_offset() const {
  return this != internal_default_instance() && bus_label_offset_ != nullptr;
}
inline bool RenderSettings::has_bus_label_offset() const {
  return _internal_has_bus_label_offset();
}
inline const ::serialize::Point& RenderSettings::_internal_bus_label_offset() const {
  const ::serialize::Point* p = bus_label_offset_;
  return p != nullptr ? *p : reinterpret_cast<const ::serialize::Point&>(
      ::serialize::_Point_default_instance_);
}
inline const ::serialize::Point& RenderSettings::bus_label_offset() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.bus_label_offset)
  return _internal_bus_label_offset();
}
inline void RenderSettings::unsafe_arena_set_allocated_bus_label_offset(
    ::serialize::Point* bus_label_offset) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bus_label_offset_);
  }
  bus_label_offset_ = bus_label_offset;
  if (bus_label_offset) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:serialize.RenderSettings.bus_label_offset)
}
inline ::serialize::Point* RenderSettings::release_bus_label_offset() {
  
  ::serialize::Point* temp = bus_label_offset_;
  bus_label_offset_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::serialize::Point* RenderSettings::unsafe_arena_release_bus_label_offset() {
  // @@protoc_insertion_point(field_release:serialize.RenderSettings.bus_label_offset)
  
  ::serialize::Point* temp = bus_label_offset_;
  bus_label_offset_ = nullptr;
  return temp;
}
inline ::serialize::Point* RenderSettings::_internal_mutable_bus_label_offset() {
  
  if (bus_label_offset_ == nullptr) {
    auto* p = CreateMaybeMessage<::serialize::Point>(GetArenaForAllocation());
    bus_label_offset_ = p;
  }
  return bus_label_offset_;
}
inline ::serialize::Point* RenderSettings::mutable_bus_label_offset() {
  ::serialize::Point* _msg = _internal_mutable_bus_label_offset();
  // @@protoc_insertion_point(field_mutable:serialize.RenderSettings.bus_label_offset)
  return _msg;
}
inline void RenderSettings::set_allocated_bus_label_offset(::serialize::Point* bus_label_offset) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(bus_label_offset_);
  }
  if (bus_label_offset) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(bus_label_offset));
    if (message_arena != submessage_arena) {
      bus_label_offset = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bus_label_offset, submessage_arena);
    }
    
  } else {
    
  }
  bus_label_offset_ = bus_label_offset;
  // @@protoc_insertion_point(field_set_allocated:serialize.RenderSettings.bus_label_offset)
}

// int32 stop_label_font_size = 8;
inline void RenderSettings::clear_stop_label_font_size() {
  stop_label_font_size_ = 0;
}
inline int32_t RenderSettings::_internal_stop_label_font_size() const {
  return stop_label_font_size_;
}
inline int32_t RenderSettings::stop_label_font_size() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.stop_label_font_size)
  return _internal_stop_label_font_size();
}
inline void RenderSettings::_internal_set_stop_label_font_size(int32_t value) {
  
  stop_label_font_size_ = value;
}
inline void RenderSettings::set_stop_label_font_size(int32_t value) {
  _internal_set_stop_label_font_size(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.stop_label_font_size)
}

// .serialize.Point stop_label_offset = 9;
inline bool RenderSettings::_internal_has_stop_label_offset() const {
  return this != internal_default_instance() && stop_label_offset_ != nullptr;
}
inline bool RenderSettings::has_stop_label_offset() const {
  return _internal_has_stop_label_offset();
}
inline const ::serialize::Point& RenderSettings::_internal_stop_label_offset() const {
  const ::serialize::Point* p = stop_label_offset_;
  return p != nullptr ? *p : reinterpret_cast<const ::serialize::Point&>(
      ::serialize::_Point_default_instance_);
}
inline const ::serialize::Point& RenderSettings::stop_label_offset() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.stop_label_offset)
  return _internal_stop_label_offset();
}
inline void RenderSettings::unsafe_arena_set_allocated_stop_label_offset(
    ::serialize::Point* stop_label_offset) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stop_label_offset_);
  }
  stop_label_offset_ = stop_label_offset;
  if (stop_label_offset) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:serialize.RenderSettings.stop_label_offset)
}
inline ::serialize::Point* RenderSettings::release_stop_label_offset() {
  
  ::serialize::Point* temp = stop_label_offset_;
  stop_label_offset_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::serialize::Point* RenderSettings::unsafe_arena_release_stop_label_offset() {
  // @@protoc_insertion_point(field_release:serialize.RenderSettings.stop_label_offset)
  
  ::serialize::Point* temp = stop_label_offset_;
  stop_label_offset_ = nullptr;
  return temp;
}
inline ::serialize::Point* RenderSettings::_internal_mutable_stop_label_offset() {
  
  if (stop_label_offset_ == nullptr) {
    auto* p = CreateMaybeMessage<::serialize::Point>(GetArenaForAllocation());
    stop_label_offset_ = p;
  }
  return stop_label_offset_;
}
inline ::serialize::Point* RenderSettings::mutable_stop_label_offset() {
  ::serialize::Point* _msg = _internal_mutable_stop_label_offset();
  // @@protoc_insertion_point(field_mutable:serialize.RenderSettings.stop_label_offset)
  return _msg;
}
inline void RenderSettings::set_allocated_stop_label_offset(::serialize::Point* stop_label_offset) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(stop_label_offset_);
  }
  if (stop_label_offset) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stop_label_offset));
    if (message_arena != submessage_arena) {
      stop_label_offset = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stop_label_offset, submessage_arena);
    }
    
  } else {
    
  }
  stop_label_offset_ = stop_label_offset;
  // @@protoc_insertion_point(field_set_allocated:serialize.RenderSettings.stop_label_offset)
}

// .serialize.Color underlayer_color = 10;
inline bool RenderSettings::_internal_has_underlayer_color() const {
  return this != internal_default_instance() && underlayer_color_ != nullptr;
}
inline bool RenderSettings::has_underlayer_color() const {
  return _internal_has_underlayer_color();
}
inline const ::serialize::Color& RenderSettings::_internal_underlayer_color() const {
  const ::serialize::Color* p = underlayer_color_;
  return p != nullptr ? *p : reinterpret_cast<const ::serialize::Color&>(
      ::serialize::_Color_default_instance_);
}
inline const ::serialize::Color& RenderSettings::underlayer_color() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.underlayer_color)
  return _internal_underlayer_color();
}
inline void RenderSettings::unsafe_arena_set_allocated_underlayer_color(
    ::serialize::Color* underlayer_color) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(underlayer_color_);
  }
  underlayer_color_ = underlayer_color;
  if (underlayer_color) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:serialize.RenderSettings.underlayer_color)
}
inline ::serialize::Color* RenderSettings::release_underlayer_color() {
  
  ::serialize::Color* temp = underlayer_color_;
  underlayer_color_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::serialize::Color* RenderSettings::unsafe_arena_release_underlayer_color() {
  // @@protoc_insertion_point(field_release:serialize.RenderSettings.underlayer_color)
  
  ::serialize::Color* temp = underlayer_color_;
  underlayer_color_ = nullptr;
  return temp;
}
inline ::serialize::Color* RenderSettings::_internal_mutable_underlayer_color() {
  
  if (underlayer_color_ == nullptr) {
    auto* p = CreateMaybeMessage<::serialize::Color>(GetArenaForAllocation());
    underlayer_color_ = p;
  }
  return underlayer_color_;
}
inline ::serialize::Color* RenderSettings::mutable_underlayer_color() {
  ::serialize::Color* _msg = _internal_mutable_underlayer_color();
  // @@protoc_insertion_point(field_mutable:serialize.RenderSettings.underlayer_color)
  return _msg;
}
inline void RenderSettings::set_allocated_underlayer_color(::serialize::Color* underlayer_color) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(underlayer_color_);
  }
  if (underlayer_color) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(underlayer_color));
    if (message_arena != submessage_arena) {
      underlayer_color = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, underlayer_color, submessage_arena);
    }
    
  } else {
    
  }
  underlayer_color_ = underlayer_color;
  // @@protoc_insertion_point(field_set_allocated:serialize.RenderSettings.underlayer_color)
}

// double underlayer_width = 11;
inline void RenderSettings::clear_underlayer_width() {
  underlayer_width_ = 0;
}
inline double RenderSettings::_internal_underlayer_width() const {
  return underlayer_width_;
}
inline double RenderSettings::underlayer_width() const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.underlayer_width)
  return _internal_underlayer_width();
}
inline void RenderSettings::_internal_set_underlayer_width(double value) {
  
  underlayer_width_ = value;
}
inline void RenderSettings::set_underlayer_width(double value) {
  _internal_set_underlayer_width(value);
  // @@protoc_insertion_point(field_set:serialize.RenderSettings.underlayer_width)
}

// repeated .serialize.Color color_palette = 12;
inline int RenderSettings::_internal_color_palette_size() const {
  return color_palette_.size();
}
inline int RenderSettings::color_palette_size() const {
  return _internal_color_palette_size();
}
inline ::serialize::Color* RenderSettings::mutable_color_palette(int index) {
  // @@protoc_insertion_point(field_mutable:serialize.RenderSettings.color_palette)
  return color_palette_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::serialize::Color >*
RenderSettings::mutable_color_palette() {
  // @@protoc_insertion_point(field_mutable_list:serialize.RenderSettings.color_palette)
  return &color_palette_;
}
inline const ::serialize::Color& RenderSettings::_internal_color_palette(int index) const {
  return color_palette_.Get(index);
}
inline const ::serialize::Color& RenderSettings::color_palette(int index) const {
  // @@protoc_insertion_point(field_get:serialize.RenderSettings.color_palette)
  return _internal_color_palette(index);
}
inline ::serialize::Color* RenderSettings::_internal_add_color_palette() {
  return color_palette_.Add();
}
inline ::serialize::Color* RenderSettings::add_color_palette() {
  ::serialize::Color* _add = _internal_add_color_palette();
  // @@protoc_insertion_point(field_add:serialize.RenderSettings.color_palette)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::serialize::Color >&
RenderSettings::color_palette() const {
  // @@protoc_insertion_point(field_list:serialize.RenderSettings.color_palette)
  return color_palette_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace serialize

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_map_5frenderer_2eproto
