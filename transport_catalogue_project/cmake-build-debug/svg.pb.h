// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: svg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_svg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_svg_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_svg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_svg_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_svg_2eproto;
namespace serialize {
class Color;
struct ColorDefaultTypeInternal;
extern ColorDefaultTypeInternal _Color_default_instance_;
class Point;
struct PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class RGB;
struct RGBDefaultTypeInternal;
extern RGBDefaultTypeInternal _RGB_default_instance_;
class RGBA;
struct RGBADefaultTypeInternal;
extern RGBADefaultTypeInternal _RGBA_default_instance_;
}  // namespace serialize
PROTOBUF_NAMESPACE_OPEN
template<> ::serialize::Color* Arena::CreateMaybeMessage<::serialize::Color>(Arena*);
template<> ::serialize::Point* Arena::CreateMaybeMessage<::serialize::Point>(Arena*);
template<> ::serialize::RGB* Arena::CreateMaybeMessage<::serialize::RGB>(Arena*);
template<> ::serialize::RGBA* Arena::CreateMaybeMessage<::serialize::RGBA>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace serialize {

// ===================================================================

class RGB final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:serialize.RGB) */ {
 public:
  inline RGB() : RGB(nullptr) {}
  ~RGB() override;
  explicit constexpr RGB(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RGB(const RGB& from);
  RGB(RGB&& from) noexcept
    : RGB() {
    *this = ::std::move(from);
  }

  inline RGB& operator=(const RGB& from) {
    CopyFrom(from);
    return *this;
  }
  inline RGB& operator=(RGB&& from) noexcept {
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
  static const RGB& default_instance() {
    return *internal_default_instance();
  }
  static inline const RGB* internal_default_instance() {
    return reinterpret_cast<const RGB*>(
               &_RGB_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RGB& a, RGB& b) {
    a.Swap(&b);
  }
  inline void Swap(RGB* other) {
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
  void UnsafeArenaSwap(RGB* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RGB* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RGB>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RGB& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RGB& from);
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
  void InternalSwap(RGB* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "serialize.RGB";
  }
  protected:
  explicit RGB(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kRedFieldNumber = 1,
    kGreenFieldNumber = 2,
    kBlueFieldNumber = 3,
  };
  // int32 red = 1;
  void clear_red();
  int32_t red() const;
  void set_red(int32_t value);
  private:
  int32_t _internal_red() const;
  void _internal_set_red(int32_t value);
  public:

  // int32 green = 2;
  void clear_green();
  int32_t green() const;
  void set_green(int32_t value);
  private:
  int32_t _internal_green() const;
  void _internal_set_green(int32_t value);
  public:

  // int32 blue = 3;
  void clear_blue();
  int32_t blue() const;
  void set_blue(int32_t value);
  private:
  int32_t _internal_blue() const;
  void _internal_set_blue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:serialize.RGB)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int32_t red_;
  int32_t green_;
  int32_t blue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_svg_2eproto;
};
// -------------------------------------------------------------------

class RGBA final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:serialize.RGBA) */ {
 public:
  inline RGBA() : RGBA(nullptr) {}
  ~RGBA() override;
  explicit constexpr RGBA(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RGBA(const RGBA& from);
  RGBA(RGBA&& from) noexcept
    : RGBA() {
    *this = ::std::move(from);
  }

  inline RGBA& operator=(const RGBA& from) {
    CopyFrom(from);
    return *this;
  }
  inline RGBA& operator=(RGBA&& from) noexcept {
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
  static const RGBA& default_instance() {
    return *internal_default_instance();
  }
  static inline const RGBA* internal_default_instance() {
    return reinterpret_cast<const RGBA*>(
               &_RGBA_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RGBA& a, RGBA& b) {
    a.Swap(&b);
  }
  inline void Swap(RGBA* other) {
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
  void UnsafeArenaSwap(RGBA* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RGBA* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RGBA>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RGBA& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RGBA& from);
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
  void InternalSwap(RGBA* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "serialize.RGBA";
  }
  protected:
  explicit RGBA(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kRedFieldNumber = 1,
    kGreenFieldNumber = 2,
    kOpacityFieldNumber = 4,
    kBlueFieldNumber = 3,
  };
  // int32 red = 1;
  void clear_red();
  int32_t red() const;
  void set_red(int32_t value);
  private:
  int32_t _internal_red() const;
  void _internal_set_red(int32_t value);
  public:

  // int32 green = 2;
  void clear_green();
  int32_t green() const;
  void set_green(int32_t value);
  private:
  int32_t _internal_green() const;
  void _internal_set_green(int32_t value);
  public:

  // double opacity = 4;
  void clear_opacity();
  double opacity() const;
  void set_opacity(double value);
  private:
  double _internal_opacity() const;
  void _internal_set_opacity(double value);
  public:

  // int32 blue = 3;
  void clear_blue();
  int32_t blue() const;
  void set_blue(int32_t value);
  private:
  int32_t _internal_blue() const;
  void _internal_set_blue(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:serialize.RGBA)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int32_t red_;
  int32_t green_;
  double opacity_;
  int32_t blue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_svg_2eproto;
};
// -------------------------------------------------------------------

class Color final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:serialize.Color) */ {
 public:
  inline Color() : Color(nullptr) {}
  ~Color() override;
  explicit constexpr Color(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Color(const Color& from);
  Color(Color&& from) noexcept
    : Color() {
    *this = ::std::move(from);
  }

  inline Color& operator=(const Color& from) {
    CopyFrom(from);
    return *this;
  }
  inline Color& operator=(Color&& from) noexcept {
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
  static const Color& default_instance() {
    return *internal_default_instance();
  }
  static inline const Color* internal_default_instance() {
    return reinterpret_cast<const Color*>(
               &_Color_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Color& a, Color& b) {
    a.Swap(&b);
  }
  inline void Swap(Color* other) {
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
  void UnsafeArenaSwap(Color* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Color* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Color>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Color& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Color& from);
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
  void InternalSwap(Color* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "serialize.Color";
  }
  protected:
  explicit Color(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kNameFieldNumber = 1,
    kRgbFieldNumber = 2,
    kRgbaFieldNumber = 3,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .serialize.RGB rgb = 2;
  bool has_rgb() const;
  private:
  bool _internal_has_rgb() const;
  public:
  void clear_rgb();
  const ::serialize::RGB& rgb() const;
  PROTOBUF_NODISCARD ::serialize::RGB* release_rgb();
  ::serialize::RGB* mutable_rgb();
  void set_allocated_rgb(::serialize::RGB* rgb);
  private:
  const ::serialize::RGB& _internal_rgb() const;
  ::serialize::RGB* _internal_mutable_rgb();
  public:
  void unsafe_arena_set_allocated_rgb(
      ::serialize::RGB* rgb);
  ::serialize::RGB* unsafe_arena_release_rgb();

  // .serialize.RGBA rgba = 3;
  bool has_rgba() const;
  private:
  bool _internal_has_rgba() const;
  public:
  void clear_rgba();
  const ::serialize::RGBA& rgba() const;
  PROTOBUF_NODISCARD ::serialize::RGBA* release_rgba();
  ::serialize::RGBA* mutable_rgba();
  void set_allocated_rgba(::serialize::RGBA* rgba);
  private:
  const ::serialize::RGBA& _internal_rgba() const;
  ::serialize::RGBA* _internal_mutable_rgba();
  public:
  void unsafe_arena_set_allocated_rgba(
      ::serialize::RGBA* rgba);
  ::serialize::RGBA* unsafe_arena_release_rgba();

  // @@protoc_insertion_point(class_scope:serialize.Color)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::serialize::RGB* rgb_;
  ::serialize::RGBA* rgba_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_svg_2eproto;
};
// -------------------------------------------------------------------

class Point final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:serialize.Point) */ {
 public:
  inline Point() : Point(nullptr) {}
  ~Point() override;
  explicit constexpr Point(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Point(const Point& from);
  Point(Point&& from) noexcept
    : Point() {
    *this = ::std::move(from);
  }

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }
  inline Point& operator=(Point&& from) noexcept {
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
  static const Point& default_instance() {
    return *internal_default_instance();
  }
  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Point& a, Point& b) {
    a.Swap(&b);
  }
  inline void Swap(Point* other) {
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
  void UnsafeArenaSwap(Point* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Point* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Point>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Point& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Point& from);
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
  void InternalSwap(Point* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "serialize.Point";
  }
  protected:
  explicit Point(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // @@protoc_insertion_point(class_scope:serialize.Point)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double x_;
  double y_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_svg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RGB

// int32 red = 1;
inline void RGB::clear_red() {
  red_ = 0;
}
inline int32_t RGB::_internal_red() const {
  return red_;
}
inline int32_t RGB::red() const {
  // @@protoc_insertion_point(field_get:serialize.RGB.red)
  return _internal_red();
}
inline void RGB::_internal_set_red(int32_t value) {
  
  red_ = value;
}
inline void RGB::set_red(int32_t value) {
  _internal_set_red(value);
  // @@protoc_insertion_point(field_set:serialize.RGB.red)
}

// int32 green = 2;
inline void RGB::clear_green() {
  green_ = 0;
}
inline int32_t RGB::_internal_green() const {
  return green_;
}
inline int32_t RGB::green() const {
  // @@protoc_insertion_point(field_get:serialize.RGB.green)
  return _internal_green();
}
inline void RGB::_internal_set_green(int32_t value) {
  
  green_ = value;
}
inline void RGB::set_green(int32_t value) {
  _internal_set_green(value);
  // @@protoc_insertion_point(field_set:serialize.RGB.green)
}

// int32 blue = 3;
inline void RGB::clear_blue() {
  blue_ = 0;
}
inline int32_t RGB::_internal_blue() const {
  return blue_;
}
inline int32_t RGB::blue() const {
  // @@protoc_insertion_point(field_get:serialize.RGB.blue)
  return _internal_blue();
}
inline void RGB::_internal_set_blue(int32_t value) {
  
  blue_ = value;
}
inline void RGB::set_blue(int32_t value) {
  _internal_set_blue(value);
  // @@protoc_insertion_point(field_set:serialize.RGB.blue)
}

// -------------------------------------------------------------------

// RGBA

// int32 red = 1;
inline void RGBA::clear_red() {
  red_ = 0;
}
inline int32_t RGBA::_internal_red() const {
  return red_;
}
inline int32_t RGBA::red() const {
  // @@protoc_insertion_point(field_get:serialize.RGBA.red)
  return _internal_red();
}
inline void RGBA::_internal_set_red(int32_t value) {
  
  red_ = value;
}
inline void RGBA::set_red(int32_t value) {
  _internal_set_red(value);
  // @@protoc_insertion_point(field_set:serialize.RGBA.red)
}

// int32 green = 2;
inline void RGBA::clear_green() {
  green_ = 0;
}
inline int32_t RGBA::_internal_green() const {
  return green_;
}
inline int32_t RGBA::green() const {
  // @@protoc_insertion_point(field_get:serialize.RGBA.green)
  return _internal_green();
}
inline void RGBA::_internal_set_green(int32_t value) {
  
  green_ = value;
}
inline void RGBA::set_green(int32_t value) {
  _internal_set_green(value);
  // @@protoc_insertion_point(field_set:serialize.RGBA.green)
}

// int32 blue = 3;
inline void RGBA::clear_blue() {
  blue_ = 0;
}
inline int32_t RGBA::_internal_blue() const {
  return blue_;
}
inline int32_t RGBA::blue() const {
  // @@protoc_insertion_point(field_get:serialize.RGBA.blue)
  return _internal_blue();
}
inline void RGBA::_internal_set_blue(int32_t value) {
  
  blue_ = value;
}
inline void RGBA::set_blue(int32_t value) {
  _internal_set_blue(value);
  // @@protoc_insertion_point(field_set:serialize.RGBA.blue)
}

// double opacity = 4;
inline void RGBA::clear_opacity() {
  opacity_ = 0;
}
inline double RGBA::_internal_opacity() const {
  return opacity_;
}
inline double RGBA::opacity() const {
  // @@protoc_insertion_point(field_get:serialize.RGBA.opacity)
  return _internal_opacity();
}
inline void RGBA::_internal_set_opacity(double value) {
  
  opacity_ = value;
}
inline void RGBA::set_opacity(double value) {
  _internal_set_opacity(value);
  // @@protoc_insertion_point(field_set:serialize.RGBA.opacity)
}

// -------------------------------------------------------------------

// Color

// string name = 1;
inline void Color::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Color::name() const {
  // @@protoc_insertion_point(field_get:serialize.Color.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Color::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:serialize.Color.name)
}
inline std::string* Color::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:serialize.Color.name)
  return _s;
}
inline const std::string& Color::_internal_name() const {
  return name_.Get();
}
inline void Color::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Color::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Color::release_name() {
  // @@protoc_insertion_point(field_release:serialize.Color.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Color::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:serialize.Color.name)
}

// .serialize.RGB rgb = 2;
inline bool Color::_internal_has_rgb() const {
  return this != internal_default_instance() && rgb_ != nullptr;
}
inline bool Color::has_rgb() const {
  return _internal_has_rgb();
}
inline void Color::clear_rgb() {
  if (GetArenaForAllocation() == nullptr && rgb_ != nullptr) {
    delete rgb_;
  }
  rgb_ = nullptr;
}
inline const ::serialize::RGB& Color::_internal_rgb() const {
  const ::serialize::RGB* p = rgb_;
  return p != nullptr ? *p : reinterpret_cast<const ::serialize::RGB&>(
      ::serialize::_RGB_default_instance_);
}
inline const ::serialize::RGB& Color::rgb() const {
  // @@protoc_insertion_point(field_get:serialize.Color.rgb)
  return _internal_rgb();
}
inline void Color::unsafe_arena_set_allocated_rgb(
    ::serialize::RGB* rgb) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(rgb_);
  }
  rgb_ = rgb;
  if (rgb) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:serialize.Color.rgb)
}
inline ::serialize::RGB* Color::release_rgb() {
  
  ::serialize::RGB* temp = rgb_;
  rgb_ = nullptr;
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
inline ::serialize::RGB* Color::unsafe_arena_release_rgb() {
  // @@protoc_insertion_point(field_release:serialize.Color.rgb)
  
  ::serialize::RGB* temp = rgb_;
  rgb_ = nullptr;
  return temp;
}
inline ::serialize::RGB* Color::_internal_mutable_rgb() {
  
  if (rgb_ == nullptr) {
    auto* p = CreateMaybeMessage<::serialize::RGB>(GetArenaForAllocation());
    rgb_ = p;
  }
  return rgb_;
}
inline ::serialize::RGB* Color::mutable_rgb() {
  ::serialize::RGB* _msg = _internal_mutable_rgb();
  // @@protoc_insertion_point(field_mutable:serialize.Color.rgb)
  return _msg;
}
inline void Color::set_allocated_rgb(::serialize::RGB* rgb) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete rgb_;
  }
  if (rgb) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::serialize::RGB>::GetOwningArena(rgb);
    if (message_arena != submessage_arena) {
      rgb = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rgb, submessage_arena);
    }
    
  } else {
    
  }
  rgb_ = rgb;
  // @@protoc_insertion_point(field_set_allocated:serialize.Color.rgb)
}

// .serialize.RGBA rgba = 3;
inline bool Color::_internal_has_rgba() const {
  return this != internal_default_instance() && rgba_ != nullptr;
}
inline bool Color::has_rgba() const {
  return _internal_has_rgba();
}
inline void Color::clear_rgba() {
  if (GetArenaForAllocation() == nullptr && rgba_ != nullptr) {
    delete rgba_;
  }
  rgba_ = nullptr;
}
inline const ::serialize::RGBA& Color::_internal_rgba() const {
  const ::serialize::RGBA* p = rgba_;
  return p != nullptr ? *p : reinterpret_cast<const ::serialize::RGBA&>(
      ::serialize::_RGBA_default_instance_);
}
inline const ::serialize::RGBA& Color::rgba() const {
  // @@protoc_insertion_point(field_get:serialize.Color.rgba)
  return _internal_rgba();
}
inline void Color::unsafe_arena_set_allocated_rgba(
    ::serialize::RGBA* rgba) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(rgba_);
  }
  rgba_ = rgba;
  if (rgba) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:serialize.Color.rgba)
}
inline ::serialize::RGBA* Color::release_rgba() {
  
  ::serialize::RGBA* temp = rgba_;
  rgba_ = nullptr;
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
inline ::serialize::RGBA* Color::unsafe_arena_release_rgba() {
  // @@protoc_insertion_point(field_release:serialize.Color.rgba)
  
  ::serialize::RGBA* temp = rgba_;
  rgba_ = nullptr;
  return temp;
}
inline ::serialize::RGBA* Color::_internal_mutable_rgba() {
  
  if (rgba_ == nullptr) {
    auto* p = CreateMaybeMessage<::serialize::RGBA>(GetArenaForAllocation());
    rgba_ = p;
  }
  return rgba_;
}
inline ::serialize::RGBA* Color::mutable_rgba() {
  ::serialize::RGBA* _msg = _internal_mutable_rgba();
  // @@protoc_insertion_point(field_mutable:serialize.Color.rgba)
  return _msg;
}
inline void Color::set_allocated_rgba(::serialize::RGBA* rgba) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete rgba_;
  }
  if (rgba) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::serialize::RGBA>::GetOwningArena(rgba);
    if (message_arena != submessage_arena) {
      rgba = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rgba, submessage_arena);
    }
    
  } else {
    
  }
  rgba_ = rgba;
  // @@protoc_insertion_point(field_set_allocated:serialize.Color.rgba)
}

// -------------------------------------------------------------------

// Point

// double x = 1;
inline void Point::clear_x() {
  x_ = 0;
}
inline double Point::_internal_x() const {
  return x_;
}
inline double Point::x() const {
  // @@protoc_insertion_point(field_get:serialize.Point.x)
  return _internal_x();
}
inline void Point::_internal_set_x(double value) {
  
  x_ = value;
}
inline void Point::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:serialize.Point.x)
}

// double y = 2;
inline void Point::clear_y() {
  y_ = 0;
}
inline double Point::_internal_y() const {
  return y_;
}
inline double Point::y() const {
  // @@protoc_insertion_point(field_get:serialize.Point.y)
  return _internal_y();
}
inline void Point::_internal_set_y(double value) {
  
  y_ = value;
}
inline void Point::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:serialize.Point.y)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serialize

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_svg_2eproto
