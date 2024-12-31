#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <any>
#include <array>
#include <atomic>
#include <barrier>
#include <bit>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <charconv>
#include <chrono>
#include <cinttypes>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <concepts>
#include <condition_variable>
#include <coroutine>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <execution>
#include <filesystem>
#if __has_include(<format>)
#include <format>
#define HAS_STD_FORMAT 1
#else
#define HAS_STD_FORMAT 0
#endif
#include <csignal> // For signal handling
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <latch>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <memory_resource>
#include <mutex>
#include <new>
#include <numbers>
#include <numeric>
#include <optional>
#include <ostream>
#include <queue>
#include <random>
#include <ranges>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <set>
#include <shared_mutex>
#include <signal.h>
#include <source_location>
#include <span>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <stop_token>
#include <streambuf>
#include <string>
#include <string_view>
#include <syncstream>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>

#ifdef _WIN32
#include <windows.h>

#define EXEC_CMD(command, mode) _popen(command, mode)
#define CLOSE_CMD(pipe) _pclose(pipe)
#else
#include <unistd.h>
#define EXEC_CMD(command, mode) popen(command, mode)
#define CLOSE_CMD(pipe) pclose(pipe)
#endif
void sleepcp(int32_t milliseconds);

void sleepcp(int32_t milliseconds)
{
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000);
#endif
}
void sleepcp(int32_t milliseconds);

typedef struct final_struct
{
    std::string Text;
    std::string ContentDescription;
    std::string StateDescription;
    std::string ClassName;
    std::string PackageName;
    std::string Error;
    std::string AccessNodeInfo;
    std::string WindowId;
    std::string WindowChanges;
    std::string WindowChangeTypes;
    std::string VirtualDescendantId;
    std::string ViewIdResName;
    std::string UniqueId;
    std::string TraversalBefore;
    std::string TraversalAfter;
    std::string TooltipText;
    std::string TimeStamp;
    std::string TimeNow;
    std::string SpeechStateChangeTypes;
    std::string SourceWindowId;
    std::string SourceNodeId;
    std::string SourceDisplayId;
    std::string Source;
    std::string Sealed;
    std::string Records;
    std::string ParentNodeId;
    std::string ParcelableData;
    std::string MovementGranularities;
    std::string HashCode;
    std::string EventType;
    std::string Actions;
    std::string ContentChangeTypes;
    std::string ConnectionId;
    std::string ChildAccessibilityIds;
    std::string BooleanProperties;
    std::string BeforeText;
    std::string Active;
    std::string AccessibilityViewId;
    std::string AccessibilityTool;
    std::string BoundsInScreen;
    std::string BoundsInParent;
    std::string UnixTimeText;
    int32_t aa_start_x_real;
    int32_t aa_start_y_real;
    int32_t aa_end_x_real;
    int32_t aa_end_y_real;
    int32_t aa_start_x;
    int32_t aa_start_y;
    int32_t aa_end_x;
    int32_t aa_end_y;
    int32_t aa_center_x;
    int32_t aa_center_y;
    int32_t aa_width;
    int32_t aa_height;
    double_t aa_w_h_relation;
    int32_t aa_area;
    int32_t aa_parent_start_x_real;
    int32_t aa_parent_start_y_real;
    int32_t aa_parent_end_x_real;
    int32_t aa_parent_end_y_real;
    int32_t aa_parent_start_x;
    int32_t aa_parent_start_y;
    int32_t aa_parent_end_x;
    int32_t aa_parent_end_y;
    int32_t aa_parent_center_x;
    int32_t aa_parent_center_y;
    int32_t aa_parent_width;
    int32_t aa_parent_height;
    double_t aa_parent_w_h_relation;
    int32_t aa_parent_area;
    int64_t UnixTime;
    size_t distance_from_start;
    size_t size;
    bool Visible;
    bool Password;
    bool Selected;
    bool Scrollable;
    bool LongClickable;
    bool Loggable;
    bool IsTextSelectable;
    bool ImportantForAccessibility;
    bool Enabled;
    bool Empty;
    bool ContextClickable;
    bool ContentInvalid;
    bool FullScreen;
    bool Focused;
    bool Focusable;
    bool AccessibilityFocused;
    bool AccessibilityDataSensitive;
    bool Clickable;
    bool Checked;
    bool Checkable;
} fstru;

template <typename T> void print_structs(std::ostream &os, T &s)
{
    os << "\n\nELEMENT:\n----------------------------------------------------------------------------------------------"
          "---------\n";
    os << "Text:\t" << s.Text << '\n';
    os << "ContentDescription:\t" << s.ContentDescription << '\n';
    os << "StateDescription:\t" << s.StateDescription << '\n';
    os << "ClassName:\t" << s.ClassName << '\n';
    os << "PackageName:\t" << s.PackageName << '\n';
    os << "Error:\t" << s.Error << '\n';
    os << "AccessNodeInfo:\t" << s.AccessNodeInfo << '\n';
    os << "WindowId:\t" << s.WindowId << '\n';
    os << "WindowChanges:\t" << s.WindowChanges << '\n';
    os << "WindowChangeTypes:\t" << s.WindowChangeTypes << '\n';
    os << "VirtualDescendantId:\t" << s.VirtualDescendantId << '\n';
    os << "ViewIdResName:\t" << s.ViewIdResName << '\n';
    os << "UniqueId:\t" << s.UniqueId << '\n';
    os << "TraversalBefore:\t" << s.TraversalBefore << '\n';
    os << "TraversalAfter:\t" << s.TraversalAfter << '\n';
    os << "TooltipText:\t" << s.TooltipText << '\n';
    os << "TimeStamp:\t" << s.TimeStamp << '\n';
    os << "TimeNow:\t" << s.TimeNow << '\n';
    os << "SpeechStateChangeTypes:\t" << s.SpeechStateChangeTypes << '\n';
    os << "SourceWindowId:\t" << s.SourceWindowId << '\n';
    os << "SourceNodeId:\t" << s.SourceNodeId << '\n';
    os << "SourceDisplayId:\t" << s.SourceDisplayId << '\n';
    os << "Source:\t" << s.Source << '\n';
    os << "Sealed:\t" << s.Sealed << '\n';
    os << "Records:\t" << s.Records << '\n';
    os << "ParentNodeId:\t" << s.ParentNodeId << '\n';
    os << "ParcelableData:\t" << s.ParcelableData << '\n';
    os << "MovementGranularities:\t" << s.MovementGranularities << '\n';
    os << "HashCode:\t" << s.HashCode << '\n';
    os << "EventType:\t" << s.EventType << '\n';
    os << "Actions:\t" << s.Actions << '\n';
    os << "ContentChangeTypes:\t" << s.ContentChangeTypes << '\n';
    os << "ConnectionId:\t" << s.ConnectionId << '\n';
    os << "ChildAccessibilityIds:\t" << s.ChildAccessibilityIds << '\n';
    os << "BooleanProperties:\t" << s.BooleanProperties << '\n';
    os << "BeforeText:\t" << s.BeforeText << '\n';
    os << "Active:\t" << s.Active << '\n';
    os << "AccessibilityViewId:\t" << s.AccessibilityViewId << '\n';
    os << "AccessibilityTool:\t" << s.AccessibilityTool << '\n';
    os << "BoundsInScreen:\t" << s.BoundsInScreen << '\n';
    os << "BoundsInParent:\t" << s.BoundsInParent << '\n';
    os << "UnixTimeText:\t" << s.UnixTimeText << '\n';
    os << "aa_start_x_real:\t" << s.aa_start_x_real << '\n';
    os << "aa_start_y_real:\t" << s.aa_start_y_real << '\n';
    os << "aa_end_x_real:\t" << s.aa_end_x_real << '\n';
    os << "aa_end_y_real:\t" << s.aa_end_y_real << '\n';
    os << "aa_start_x:\t" << s.aa_start_x << '\n';
    os << "aa_start_y:\t" << s.aa_start_y << '\n';
    os << "aa_end_x:\t" << s.aa_end_x << '\n';
    os << "aa_end_y:\t" << s.aa_end_y << '\n';
    os << "aa_center_x:\t" << s.aa_center_x << '\n';
    os << "aa_center_y:\t" << s.aa_center_y << '\n';
    os << "aa_width:\t" << s.aa_width << '\n';
    os << "aa_height:\t" << s.aa_height << '\n';
    os << "aa_w_h_relation:\t" << s.aa_w_h_relation << '\n';
    os << "aa_area:\t" << s.aa_area << '\n';
    os << "aa_parent_start_x_real:\t" << s.aa_parent_start_x_real << '\n';
    os << "aa_parent_start_y_real:\t" << s.aa_parent_start_y_real << '\n';
    os << "aa_parent_end_x_real:\t" << s.aa_parent_end_x_real << '\n';
    os << "aa_parent_end_y_real:\t" << s.aa_parent_end_y_real << '\n';
    os << "aa_parent_start_x:\t" << s.aa_parent_start_x << '\n';
    os << "aa_parent_start_y:\t" << s.aa_parent_start_y << '\n';
    os << "aa_parent_end_x:\t" << s.aa_parent_end_x << '\n';
    os << "aa_parent_end_y:\t" << s.aa_parent_end_y << '\n';
    os << "aa_parent_center_x:\t" << s.aa_parent_center_x << '\n';
    os << "aa_parent_center_y:\t" << s.aa_parent_center_y << '\n';
    os << "aa_parent_width:\t" << s.aa_parent_width << '\n';
    os << "aa_parent_height:\t" << s.aa_parent_height << '\n';
    os << "aa_parent_w_h_relation:\t" << s.aa_parent_w_h_relation << '\n';
    os << "aa_parent_area:\t" << s.aa_parent_area << '\n';
    os << "UnixTime:\t" << s.UnixTime << '\n';
    os << "distance_from_start:\t" << s.distance_from_start << '\n';
    os << "size:\t" << s.size << '\n';
    os << "Visible:\t" << s.Visible << '\n';
    os << "Password:\t" << s.Password << '\n';
    os << "Selected:\t" << s.Selected << '\n';
    os << "Scrollable:\t" << s.Scrollable << '\n';
    os << "LongClickable:\t" << s.LongClickable << '\n';
    os << "Loggable:\t" << s.Loggable << '\n';
    os << "IsTextSelectable:\t" << s.IsTextSelectable << '\n';
    os << "ImportantForAccessibility:\t" << s.ImportantForAccessibility << '\n';
    os << "Enabled:\t" << s.Enabled << '\n';
    os << "Empty:\t" << s.Empty << '\n';
    os << "ContextClickable:\t" << s.ContextClickable << '\n';
    os << "ContentInvalid:\t" << s.ContentInvalid << '\n';
    os << "FullScreen:\t" << s.FullScreen << '\n';
    os << "Focused:\t" << s.Focused << '\n';
    os << "Focusable:\t" << s.Focusable << '\n';
    os << "AccessibilityFocused:\t" << s.AccessibilityFocused << '\n';
    os << "AccessibilityDataSensitive:\t" << s.AccessibilityDataSensitive << '\n';
    os << "Clickable:\t" << s.Clickable << '\n';
    os << "Checked:\t" << s.Checked << '\n';
    os << "Checkable:\t" << s.Checkable << '\n';
    os << '\n';
}
static constexpr std::string_view delim_csv{"\",\""};

template <typename T> static void dump_struct_vector_as_csv(T &it, std::string &outputstring)
{

    // outputstring.reserve(sizeof(it) * 2);
    outputstring.clear();

#if HAS_STD_FORMAT
    outputstring.append(std::format(
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\"\n",
        it.Text, it.ContentDescription, it.StateDescription, it.ClassName, it.PackageName, it.Error, it.AccessNodeInfo,
        it.WindowId, it.WindowChanges, it.WindowChangeTypes, it.VirtualDescendantId, it.ViewIdResName, it.UniqueId,
        it.TraversalBefore, it.TraversalAfter, it.TooltipText, it.TimeStamp, it.TimeNow, it.SpeechStateChangeTypes,
        it.SourceWindowId, it.SourceNodeId, it.SourceDisplayId, it.Source, it.Sealed, it.Records, it.ParentNodeId,
        it.ParcelableData, it.MovementGranularities, it.HashCode, it.EventType, it.Actions, it.ContentChangeTypes,
        it.ConnectionId, it.ChildAccessibilityIds, it.BooleanProperties, it.BeforeText, it.Active,
        it.AccessibilityViewId, it.AccessibilityTool, it.BoundsInScreen, it.BoundsInParent, it.UnixTimeText,
        it.aa_start_x_real, it.aa_start_y_real, it.aa_end_x_real, it.aa_end_y_real, it.aa_start_x, it.aa_start_y,
        it.aa_end_x, it.aa_end_y, it.aa_center_x, it.aa_center_y, it.aa_width, it.aa_height, it.aa_w_h_relation,
        it.aa_area, it.aa_parent_start_x_real, it.aa_parent_start_y_real, it.aa_parent_end_x_real,
        it.aa_parent_end_y_real, it.aa_parent_start_x, it.aa_parent_start_y, it.aa_parent_end_x, it.aa_parent_end_y,
        it.aa_parent_center_x, it.aa_parent_center_y, it.aa_parent_width, it.aa_parent_height,
        it.aa_parent_w_h_relation, it.aa_parent_area, it.UnixTime, it.distance_from_start, it.size, it.Visible,
        it.Password, it.Selected, it.Scrollable, it.LongClickable, it.Loggable, it.IsTextSelectable,
        it.ImportantForAccessibility, it.Enabled, it.Empty, it.ContextClickable, it.ContentInvalid, it.FullScreen,
        it.Focused, it.Focusable, it.AccessibilityFocused, it.AccessibilityDataSensitive, it.Clickable, it.Checked,
        it.Checkable));
#else
    outputstring += '"';
    outputstring.append((it.Text));
    outputstring.append(delim_csv);
    outputstring.append((it.ContentDescription));
    outputstring.append(delim_csv);
    outputstring.append((it.StateDescription));
    outputstring.append(delim_csv);
    outputstring.append((it.ClassName));
    outputstring.append(delim_csv);
    outputstring.append((it.PackageName));
    outputstring.append(delim_csv);
    outputstring.append((it.Error));
    outputstring.append(delim_csv);
    outputstring.append((it.AccessNodeInfo));
    outputstring.append(delim_csv);
    outputstring.append((it.WindowId));
    outputstring.append(delim_csv);
    outputstring.append((it.WindowChanges));
    outputstring.append(delim_csv);
    outputstring.append((it.WindowChangeTypes));
    outputstring.append(delim_csv);
    outputstring.append((it.VirtualDescendantId));
    outputstring.append(delim_csv);
    outputstring.append((it.ViewIdResName));
    outputstring.append(delim_csv);
    outputstring.append((it.UniqueId));
    outputstring.append(delim_csv);
    outputstring.append((it.TraversalBefore));
    outputstring.append(delim_csv);
    outputstring.append((it.TraversalAfter));
    outputstring.append(delim_csv);
    outputstring.append((it.TooltipText));
    outputstring.append(delim_csv);
    outputstring.append((it.TimeStamp));
    outputstring.append(delim_csv);
    outputstring.append((it.TimeNow));
    outputstring.append(delim_csv);
    outputstring.append((it.SpeechStateChangeTypes));
    outputstring.append(delim_csv);
    outputstring.append((it.SourceWindowId));
    outputstring.append(delim_csv);
    outputstring.append((it.SourceNodeId));
    outputstring.append(delim_csv);
    outputstring.append((it.SourceDisplayId));
    outputstring.append(delim_csv);
    outputstring.append((it.Source));
    outputstring.append(delim_csv);
    outputstring.append((it.Sealed));
    outputstring.append(delim_csv);
    outputstring.append((it.Records));
    outputstring.append(delim_csv);
    outputstring.append((it.ParentNodeId));
    outputstring.append(delim_csv);
    outputstring.append((it.ParcelableData));
    outputstring.append(delim_csv);
    outputstring.append((it.MovementGranularities));
    outputstring.append(delim_csv);
    outputstring.append((it.HashCode));
    outputstring.append(delim_csv);
    outputstring.append((it.EventType));
    outputstring.append(delim_csv);
    outputstring.append((it.Actions));
    outputstring.append(delim_csv);
    outputstring.append((it.ContentChangeTypes));
    outputstring.append(delim_csv);
    outputstring.append((it.ConnectionId));
    outputstring.append(delim_csv);
    outputstring.append((it.ChildAccessibilityIds));
    outputstring.append(delim_csv);
    outputstring.append((it.BooleanProperties));
    outputstring.append(delim_csv);
    outputstring.append((it.BeforeText));
    outputstring.append(delim_csv);
    outputstring.append((it.Active));
    outputstring.append(delim_csv);
    outputstring.append((it.AccessibilityViewId));
    outputstring.append(delim_csv);
    outputstring.append((it.AccessibilityTool));
    outputstring.append(delim_csv);
    outputstring.append((it.BoundsInScreen));
    outputstring.append(delim_csv);
    outputstring.append((it.BoundsInParent));
    outputstring.append(delim_csv);
    outputstring.append((it.UnixTimeText));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_center_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_center_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_width));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_height));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_w_h_relation));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_area));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_center_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_center_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_width));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_height));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_w_h_relation));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_area));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.UnixTime));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.distance_from_start));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.size));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Visible));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Password));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Selected));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Scrollable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.LongClickable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Loggable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.IsTextSelectable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.ImportantForAccessibility));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Enabled));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Empty));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.ContextClickable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.ContentInvalid));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.FullScreen));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Focused));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Focusable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.AccessibilityFocused));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.AccessibilityDataSensitive));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Clickable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Checked));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Checkable));
    outputstring.append(delim_csv);
    outputstring += '"';
    outputstring += '\n';

#endif

    // return outputstring;
}

static constexpr std::string_view sv_Text{"Text"};
static constexpr std::string_view sv_ContentDescription{"ContentDescription"};
static constexpr std::string_view sv_StateDescription{"StateDescription"};
static constexpr std::string_view sv_ClassName{"ClassName"};
static constexpr std::string_view sv_PackageName{"PackageName"};
static constexpr std::string_view sv_Error{"Error"};
static constexpr std::string_view sv_AccessNodeInfo{"AccessNodeInfo"};
static constexpr std::string_view sv_WindowId{"WindowId"};
static constexpr std::string_view sv_WindowChanges{"WindowChanges"};
static constexpr std::string_view sv_WindowChangeTypes{"WindowChangeTypes"};
static constexpr std::string_view sv_VirtualDescendantId{"VirtualDescendantId"};
static constexpr std::string_view sv_ViewIdResName{"ViewIdResName"};
static constexpr std::string_view sv_UniqueId{"UniqueId"};
static constexpr std::string_view sv_TraversalBefore{"TraversalBefore"};
static constexpr std::string_view sv_TraversalAfter{"TraversalAfter"};
static constexpr std::string_view sv_TooltipText{"TooltipText"};
static constexpr std::string_view sv_TimeStamp{"TimeStamp"};
static constexpr std::string_view sv_TimeNow{"TimeNow"};
static constexpr std::string_view sv_SpeechStateChangeTypes{"SpeechStateChangeTypes"};
static constexpr std::string_view sv_SourceWindowId{"SourceWindowId"};
static constexpr std::string_view sv_SourceNodeId{"SourceNodeId"};
static constexpr std::string_view sv_SourceDisplayId{"SourceDisplayId"};
static constexpr std::string_view sv_Source{"Source"};
static constexpr std::string_view sv_Sealed{"Sealed"};
static constexpr std::string_view sv_Records{"Records"};
static constexpr std::string_view sv_ParentNodeId{"ParentNodeId"};
static constexpr std::string_view sv_ParcelableData{"ParcelableData"};
static constexpr std::string_view sv_MovementGranularities{"MovementGranularities"};
static constexpr std::string_view sv_HashCode{"HashCode"};
static constexpr std::string_view sv_EventType{"EventType"};
static constexpr std::string_view sv_Actions{"Actions"};
static constexpr std::string_view sv_ContentChangeTypes{"ContentChangeTypes"};
static constexpr std::string_view sv_ConnectionId{"ConnectionId"};
static constexpr std::string_view sv_ChildAccessibilityIds{"ChildAccessibilityIds"};
static constexpr std::string_view sv_BooleanProperties{"BooleanProperties"};
static constexpr std::string_view sv_BeforeText{"BeforeText"};
static constexpr std::string_view sv_Active{"Active"};
static constexpr std::string_view sv_AccessibilityViewId{"AccessibilityViewId"};
static constexpr std::string_view sv_AccessibilityTool{"AccessibilityTool"};
static constexpr std::string_view sv_BoundsInScreen{"BoundsInScreen"};
static constexpr std::string_view sv_BoundsInParent{"BoundsInParent"};
static constexpr std::string_view sv_UnixTimeText{"UnixTimeText"};
static constexpr std::string_view sv_UnixTime{"UnixTime"};
static constexpr std::string_view sv_Visible{"Visible"};
static constexpr std::string_view sv_Password{"Password"};
static constexpr std::string_view sv_Selected{"Selected"};
static constexpr std::string_view sv_Scrollable{"Scrollable"};
static constexpr std::string_view sv_LongClickable{"LongClickable"};
static constexpr std::string_view sv_Loggable{"Loggable"};
static constexpr std::string_view sv_IsTextSelectable{"IsTextSelectable"};
static constexpr std::string_view sv_ImportantForAccessibility{"ImportantForAccessibility"};
static constexpr std::string_view sv_Enabled{"Enabled"};
static constexpr std::string_view sv_Empty{"Empty"};
static constexpr std::string_view sv_ContextClickable{"ContextClickable"};
static constexpr std::string_view sv_ContentInvalid{"ContentInvalid"};
static constexpr std::string_view sv_FullScreen{"FullScreen"};
static constexpr std::string_view sv_Focused{"Focused"};
static constexpr std::string_view sv_Focusable{"Focusable"};
static constexpr std::string_view sv_AccessibilityFocused{"AccessibilityFocused"};
static constexpr std::string_view sv_AccessibilityDataSensitive{"AccessibilityDataSensitive"};
static constexpr std::string_view sv_Clickable{"Clickable"};
static constexpr std::string_view sv_Checked{"Checked"};
static constexpr std::string_view sv_Checkable{"Checkable"};

static constexpr std::array<std::string_view, 123> compare_vector = {

    "; text: ",
    "; contentDescription: ",
    "; stateDescription: ",
    "; className: ",
    "; packageName: ",
    "; error: ",
    "; accessNodeInfo: ",
    "; windowId: ",
    "; windowChanges: ",
    "; windowChangeTypes: ",
    "; virtualDescendantId: ",
    "; viewIdResName: ",
    "; uniqueId: ",
    "; traversalBefore: ",
    "; traversalAfter: ",
    "; tooltipText: ",
    "; timeStamp: ",
    "; timeNow: ",
    "; speechStateChangeTypes: ",
    "; sourceWindowId: ",
    "; sourceNodeId: ",
    "; sourceDisplayId: ",
    "; source: ",
    "; sealed: ",
    "; records: ",
    "; parentNodeId: ",
    "; parcelableData: ",
    "; movementGranularities: ",
    "; hashCode: ",
    "; eventType: ",
    "; actions: ",
    "; contentChangeTypes: ",
    "; connectionId: ",
    "; childAccessibilityIds: ",
    "; booleanProperties: ",
    "; beforeText: ",
    "; active: ",
    "; accessibilityViewId: ",
    "; accessibilityTool: ",
    "; boundsInScreen: ",
    "; boundsInParent: ",
    "; visible: ",
    "; password: ",
    "; selected: ",
    "; scrollable: ",
    "; longClickable: ",
    "; loggable: ",
    "; isTextSelectable: ",
    "; importantForAccessibility: ",
    "; enabled: ",
    "; empty: ",
    "; contextClickable: ",
    "; contentInvalid: ",
    "; fullScreen: ",
    "; focused: ",
    "; focusable: ",
    "; accessibilityFocused: ",
    "; accessibilityDataSensitive: ",
    "; clickable: ",
    "; checked: ",
    "; checkable: ",
    "; Text: ",
    "; ContentDescription: ",
    "; StateDescription: ",
    "; ClassName: ",
    "; PackageName: ",
    "; Error: ",
    "; AccessNodeInfo: ",
    "; WindowId: ",
    "; WindowChanges: ",
    "; WindowChangeTypes: ",
    "; VirtualDescendantId: ",
    "; ViewIdResName: ",
    "; UniqueId: ",
    "; TraversalBefore: ",
    "; TraversalAfter: ",
    "; TooltipText: ",
    "; TimeStamp: ",
    "; TimeNow: ",
    "; SpeechStateChangeTypes: ",
    "; SourceWindowId: ",
    "; SourceNodeId: ",
    "; SourceDisplayId: ",
    "; Source: ",
    "; Sealed: ",
    "; Records: ",
    "; ParentNodeId: ",
    "; ParcelableData: ",
    "; MovementGranularities: ",
    "; HashCode: ",
    "; EventType: ",
    "; Actions: ",
    "; ContentChangeTypes: ",
    "; ConnectionId: ",
    "; ChildAccessibilityIds: ",
    "; BooleanProperties: ",
    "; BeforeText: ",
    "; Active: ",
    "; AccessibilityViewId: ",
    "; AccessibilityTool: ",
    "; BoundsInScreen: ",
    "; BoundsInParent: ",
    "; Visible: ",
    "; Password: ",
    "; Selected: ",
    "; Scrollable: ",
    "; LongClickable: ",
    "; Loggable: ",
    "; IsTextSelectable: ",
    "; ImportantForAccessibility: ",
    "; Enabled: ",
    "; Empty: ",
    "; ContextClickable: ",
    "; ContentInvalid: ",
    "; FullScreen: ",
    "; Focused: ",
    "; Focusable: ",
    "; AccessibilityFocused: ",
    "; AccessibilityDataSensitive: ",
    "; Clickable: ",
    "; Checked: ",
    "; Checkable: ",
    "; maxTextLength: "
    //"; MaxTextLength: ",

};

static constexpr std::array<std::string_view, 123> compare_vector2 = {"text: ",
                                                                      "contentDescription: ",
                                                                      "stateDescription: ",
                                                                      "className: ",
                                                                      "packageName: ",
                                                                      "error: ",
                                                                      "accessNodeInfo: ",
                                                                      "windowId: ",
                                                                      "windowChanges: ",
                                                                      "windowChangeTypes: ",
                                                                      "virtualDescendantId: ",
                                                                      "viewIdResName: ",
                                                                      "uniqueId: ",
                                                                      "traversalBefore: ",
                                                                      "traversalAfter: ",
                                                                      "tooltipText: ",
                                                                      "timeStamp: ",
                                                                      "timeNow: ",
                                                                      "speechStateChangeTypes: ",
                                                                      "sourceWindowId: ",
                                                                      "sourceNodeId: ",
                                                                      "sourceDisplayId: ",
                                                                      "source: ",
                                                                      "sealed: ",
                                                                      "records: ",
                                                                      "parentNodeId: ",
                                                                      "parcelableData: ",
                                                                      "movementGranularities: ",
                                                                      "hashCode: ",
                                                                      "eventType: ",
                                                                      "actions: ",
                                                                      "contentChangeTypes: ",
                                                                      "connectionId: ",
                                                                      "childAccessibilityIds: ",
                                                                      "booleanProperties: ",
                                                                      "beforeText: ",
                                                                      "active: ",
                                                                      "accessibilityViewId: ",
                                                                      "accessibilityTool: ",
                                                                      "boundsInScreen: ",
                                                                      "boundsInParent: ",
                                                                      "visible: ",
                                                                      "password: ",
                                                                      "selected: ",
                                                                      "scrollable: ",
                                                                      "longClickable: ",
                                                                      "loggable: ",
                                                                      "isTextSelectable: ",
                                                                      "importantForAccessibility: ",
                                                                      "enabled: ",
                                                                      "empty: ",
                                                                      "contextClickable: ",
                                                                      "contentInvalid: ",
                                                                      "fullScreen: ",
                                                                      "focused: ",
                                                                      "focusable: ",
                                                                      "accessibilityFocused: ",
                                                                      "accessibilityDataSensitive: ",
                                                                      "clickable: ",
                                                                      "checked: ",
                                                                      "checkable: ",
                                                                      "Text: ",
                                                                      "ContentDescription: ",
                                                                      "StateDescription: ",
                                                                      "ClassName: ",
                                                                      "PackageName: ",
                                                                      "Error: ",
                                                                      "AccessNodeInfo: ",
                                                                      "WindowId: ",
                                                                      "WindowChanges: ",
                                                                      "WindowChangeTypes: ",
                                                                      "VirtualDescendantId: ",
                                                                      "ViewIdResName: ",
                                                                      "UniqueId: ",
                                                                      "TraversalBefore: ",
                                                                      "TraversalAfter: ",
                                                                      "TooltipText: ",
                                                                      "TimeStamp: ",
                                                                      "TimeNow: ",
                                                                      "SpeechStateChangeTypes: ",
                                                                      "SourceWindowId: ",
                                                                      "SourceNodeId: ",
                                                                      "SourceDisplayId: ",
                                                                      "Source: ",
                                                                      "Sealed: ",
                                                                      "Records: ",
                                                                      "ParentNodeId: ",
                                                                      "ParcelableData: ",
                                                                      "MovementGranularities: ",
                                                                      "HashCode: ",
                                                                      "EventType: ",
                                                                      "Actions: ",
                                                                      "ContentChangeTypes: ",
                                                                      "ConnectionId: ",
                                                                      "ChildAccessibilityIds: ",
                                                                      "BooleanProperties: ",
                                                                      "BeforeText: ",
                                                                      "Active: ",
                                                                      "AccessibilityViewId: ",
                                                                      "AccessibilityTool: ",
                                                                      "BoundsInScreen: ",
                                                                      "BoundsInParent: ",
                                                                      "Visible: ",
                                                                      "Password: ",
                                                                      "Selected: ",
                                                                      "Scrollable: ",
                                                                      "LongClickable: ",
                                                                      "Loggable: ",
                                                                      "IsTextSelectable: ",
                                                                      "ImportantForAccessibility: ",
                                                                      "Enabled: ",
                                                                      "Empty: ",
                                                                      "ContextClickable: ",
                                                                      "ContentInvalid: ",
                                                                      "FullScreen: ",
                                                                      "Focused: ",
                                                                      "Focusable: ",
                                                                      "AccessibilityFocused: ",
                                                                      "AccessibilityDataSensitive: ",
                                                                      "Clickable: ",
                                                                      "Checked: ",
                                                                      "Checkable: ",
                                                                      "maxTextLength: "};

static constexpr uint8_t get_os()
{
#ifdef __ANDROID__
    return 0;
#elif _WIN32
    return 1;
#elif _WIN64
    return 1;
#elif __APPLE__ || __MACH__
    return 2;
#elif __linux__
    return 3;
#elif __FreeBSD__
    return 4;
#elif __unix || __unix__
    return 5;
#else
    return 6;
#endif
}
static constexpr bool is_android{get_os() == 0};

constexpr static bool is_digit(char c)
{
    return c <= '9' && c >= '0';
}

static constexpr size_t find_time_stamp(const std::string_view line)
{
    if (line.size() < 20)
    {
        return std::string::npos;
    }
    for (size_t i{}; i < line.size() - 20; i++)
    {
        // example: 12-30 03:12:08.375
        if (is_digit(line[i]) && is_digit(line[i + 1]) && (line[i + 2] == '-') && is_digit(line[i + 3]) &&
            is_digit(line[i + 4]) && (line[i + 5] == ' ') && is_digit(line[i + 6]) && is_digit(line[i + 7]) &&
            (line[i + 8] == ':') && is_digit(line[i + 9]) && is_digit(line[i + 10]) && (line[i + 11] == ':') &&
            is_digit(line[i + 12]) && is_digit(line[i + 13]) && (line[i + 14] == '.') && is_digit(line[i + 15]) &&
            is_digit(line[i + 16]) && is_digit(line[i + 17]))
        {
            return i;
        }
    }
    return std::string::npos;
}
static constexpr std::string_view accessaction_sv{"AccessibilityAction: "};

static void constexpr mymemset(uint8_t *startptr, uint8_t *endptr)
{
    for (; startptr != endptr; startptr++)
    {
        *startptr = 0;
    }
}
constexpr static int64_t satoll_impl(const char *str, int64_t value = 0)
{
    return *str ? is_digit(*str) ? satoll_impl(str + 1, (*str - '0') + value * 10) : 0 : value;
}

int64_t static constexpr myatoll(const std::string &str)
{
    return satoll_impl(str.c_str());
}
int64_t static convert_to_unix_timestamp(const std::string_view date_string, tm *current_tm, tm &tm,
                                         uint8_t *endptrtime)
{

    mymemset((uint8_t *)&tm, endptrtime);
    tm.tm_mon = myatoll(std::string(date_string.substr(0, 2))) - 1;
    tm.tm_mday = myatoll(std::string(date_string.substr(3, 2)));
    tm.tm_hour = myatoll(std::string(date_string.substr(6, 2)));
    tm.tm_min = myatoll(std::string(date_string.substr(9, 2)));
    tm.tm_sec = myatoll(std::string(date_string.substr(12, 2)));
    int64_t milliseconds{myatoll(std::string(date_string.substr(15, 3)))};
    tm.tm_isdst = -1;
    time_t current_time{time(NULL)};
    current_tm = localtime(&current_time);
    tm.tm_year = current_tm->tm_year;
    int64_t unix_time{mktime(&tm)};
    int64_t timestamp_with_milliseconds{unix_time * 1000 + milliseconds};
    return timestamp_with_milliseconds;
}
bool static constexpr isspace_or_empty(const std::string_view &s)
{
    if (s.empty())
    {
        return true;
    }
    return std::all_of(s.begin(), s.end(), isspace);
}
int main(int argc, char *argv[])
{
    static constexpr size_t size_my_buffer{32};
    std::string adb_clean_cmd;
    std::string adb_run_parser_cmd;
    if (is_android)
    {
        adb_clean_cmd = "logcat -b all -c";
        adb_run_parser_cmd = "stty raw;while true;do sleep 1;logcat --pid=\"$(pgrep iamsohappy)\" --dividers;done";
    }
    else if (argc < 3)
    {
        std::cerr << "Since you are not running on Android, you must pass the path to the adb executable and the "
                     "serial\nExample:\n "
                     "logcatparser.exe C:\\Users\\hansc\\AppData\\Local\\Android\\Sdk\\platform-tools\\adb.exe "
                     "127.0.0.1:5556\n";
        return EXIT_FAILURE;
    }
    else
    {

        std::string adb_executable{argv[1]};
        std::string serial{argv[2]};
        adb_run_parser_cmd = adb_executable + " -s " + serial + " shell " +
                             "stty raw;while true;do sleep 1;logcat --pid=\"$(pgrep iamsohappy)\" --dividers;done";
        adb_clean_cmd = adb_executable + " -s " + serial + " shell logcat -b all -c";
    }
    system(adb_clean_cmd.c_str());
    char buffer[size_my_buffer]{};
    FILE *pipe{EXEC_CMD(adb_run_parser_cmd.c_str(), "r")};
    if (!pipe)
    {
        std::cerr << "Failed to execute command: " << adb_run_parser_cmd << std::endl;
        return EXIT_FAILURE;
    }
    std::string tempstring;

    tempstring.reserve(8192);
    static constexpr size_t max_size_tmpstring{8192 * 2};
    std::string timestampstring;
    timestampstring.reserve(18);
    tm struct_tm{};
    time_t current_time = time(NULL);
    tm *current_tm = localtime(&current_time);
    struct_tm.tm_year = current_tm->tm_year;
    uint8_t *endptrtime = (((uint8_t *)((&struct_tm))) + sizeof(tm));
    static constexpr size_t offset_first_element{44};
    std::string ref3;
    ref3.reserve(1024);
    while (1)
    {
        if (tempstring.size() > max_size_tmpstring)
        {
            tempstring.clear();
        }
        fgets(buffer, size_my_buffer, pipe);
        for (size_t i{}; i < size_my_buffer; i++)
        {
            if (buffer[i] == '\0')
            {
                continue;
            }
            else if (buffer[i] == '\n')
            {
                buffer[i] = '\0';
#ifdef _WIN32
                if (!tempstring.empty() && tempstring.back() == '\r')
                {
                    tempstring.pop_back();
                }
#endif

                size_t posoftstamp = find_time_stamp(tempstring);
                if ((posoftstamp != std::string::npos) && (posoftstamp > 0))
                {
                    tempstring.erase(tempstring.begin(), tempstring.begin() + posoftstamp - 1);
                }
                if ((posoftstamp != std::string::npos) && ((tempstring.find(accessaction_sv) != std::string::npos)))
                {
                    std::cout << tempstring << std::endl;
                    std::cout << "----------------------------------" << std::endl;
                    timestampstring.clear();
                    timestampstring += tempstring.substr(0, 18);
                    int64_t converted_unix_tstamp{
                        convert_to_unix_timestamp(timestampstring, current_tm, struct_tm, endptrtime)};
                    std::cout << "UnixTstamp: " << converted_unix_tstamp << std::endl;
                    tempstring.erase(tempstring.begin(), tempstring.begin() + offset_first_element);
                    std::cout << tempstring << std::endl;
                    std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
                    for (const std::string_view &s : compare_vector)
                    {
                        size_t foundstring{tempstring.find(s)};
                        if (foundstring != std::string::npos)
                        {
                            tempstring[foundstring] = '\n';
                            tempstring[foundstring + 1] = '\n';
                        }
                    }
                    std::cout << tempstring << std::endl;
                    std::cout << "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY" << std::endl;
                    auto strs2 = tempstring | std::views::split('\n');
                    for (const auto &ref2 : strs2)
                    {
                        ref3.clear();
                        ref3.append({ref2.begin(), ref2.end()});
                        ref3.erase(ref3.begin(), std::find_if(ref3.begin(), ref3.end(),
                                                              [](unsigned char ch) { return !std::isspace(ch); }));
                        ref3.erase(
                            std::find_if(ref3.rbegin(), ref3.rend(), [](unsigned char ch) { return !std::isspace(ch); })
                                .base(),
                            ref3.end());
                        if (isspace_or_empty(ref3))
                        {

                            continue;
                        }
                        if (islower(ref3[0]))
                        {
                            ref3[0] += 'A' - 'a';
                        }
                        std::cout << "Converted String: " << ref3 << std::endl;
                    }
                    tempstring.clear();
                }
                else
                {
                    tempstring += ' ';
                }
            }
            else
            {
                tempstring += buffer[i];
                buffer[i] = '\0';
            }
        }
    }
    return EXIT_SUCCESS;
}
