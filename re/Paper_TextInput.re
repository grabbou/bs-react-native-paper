[@bs.module "react-native-paper"]
external reactClass : ReasonReact.reactClass = "TextInput";

[@bs.deriving jsConverter]
type capitalize = [ | `none | `sentences | `words | `characters];

let make =
    (
      ~allowFontScaling: bool=false,
      ~autoCorrect: bool=false,
      ~autoFocus: bool=false,
      ~autoCapitalize: option(capitalize)=?,
      ~autoGrow: bool=false,
      ~blurOnSubmit: bool=false,
      ~caretHidden: bool=false,
      ~contextMenuHidden: bool=false,
      ~dataDetectorTypes: option(string)=?,
      ~enablesReturnKeyAutomatically: bool=false,
      ~keyboardAppearance: option(string)=?,
      ~defaultValue: option(string)=?,
      ~disabled: bool=false,
      ~disableFullscreenUI: bool=false,
      ~editable: bool=false,
      ~keyboardType: option(string)=?,
      ~inlineImageLeft: option(string)=?,
      ~inlineImagePadding: option(string)=?,
      ~maxHeight: option(float)=?,
      ~maxLength: option(int)=?,
      ~label: option(string)=?,
      ~placeholder: option(string)=?,
      ~placeholderTextColor: option(string)=?,
      ~returnKeyType: option(string)=?,
      ~returnKeyLabel: option(string)=?,
      ~spellCheck: bool=false,
      ~textBreakStrategy: option(string)=?,
      ~underlineColorAndroid: option(string)=?,
      ~clearButtonMode: option(string)=?,
      ~clearTextOnFocus: option(string)=?,
      ~secureTextEntry: bool=false,
      ~selectTextOnFocus: bool=false,
      ~selection: option(Js.t({..}))=?,
      ~selectionColor: option(string)=?,
      ~underlineColor: option(string)=?,
      ~multiline: bool=false,
      ~numberOfLines: option(int)=?,
      ~value: option(string)=?,
      ~theme: option(Js.t({..}))=?,
      ~style: option(BsReactNative.Style.t)=?,
      ~onChange: option(unit => unit)=?,
      ~onChangeText: option(string => unit)=?,
      ~onContentSizeChange: option(unit => unit)=?,
      ~onKeyPress: option(unit => unit)=?,
      ~onEndEditing: option(unit => unit)=?,
      ~onLayout: option(unit => unit)=?,
      ~onScroll: option(unit => unit)=?,
      ~onSelectionChange: option(unit => unit)=?,
      ~onSubmitEditing: option(unit => unit)=?,
      ~onFocus: option(unit => unit)=?,
      ~onBlur: option(unit => unit)=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      Js.Null_undefined.(
        {
          "allowFontScaling": Js.Boolean.to_js_boolean(allowFontScaling),
          "autoCorrect": Js.Boolean.to_js_boolean(autoCorrect),
          "autoFocus": Js.Boolean.to_js_boolean(autoFocus),
          "autoCapitalize":
            (
              switch autoCapitalize {
              | Some(autoCapitalize) => Some(capitalizeToJs(autoCapitalize))
              | None => None
              }
            )
            |> from_opt,
          "autoGrow": Js.Boolean.to_js_boolean(autoGrow),
          "blurOnSubmit": Js.Boolean.to_js_boolean(blurOnSubmit),
          "caretHidden": Js.Boolean.to_js_boolean(caretHidden),
          "contextMenuHidden": Js.Boolean.to_js_boolean(contextMenuHidden),
          "dataDetectorTypes": from_opt(dataDetectorTypes),
          "enablesReturnKeyAutomatically":
            Js.Boolean.to_js_boolean(enablesReturnKeyAutomatically),
          "keyboardAppearance": from_opt(keyboardAppearance),
          "defaultValue": from_opt(defaultValue),
          "disabled": Js.Boolean.to_js_boolean(disabled),
          "disableFullscreenUI": Js.Boolean.to_js_boolean(disableFullscreenUI),
          "editable": Js.Boolean.to_js_boolean(editable),
          "keyboardType": from_opt(keyboardType),
          "inlineImageLeft": from_opt(inlineImageLeft),
          "inlineImagePadding": from_opt(inlineImagePadding),
          "maxHeight": from_opt(maxHeight),
          "maxLength": from_opt(maxLength),
          "label": from_opt(label),
          "placeholder": from_opt(placeholder),
          "placeholderTextColor": from_opt(placeholderTextColor),
          "returnKeyType": from_opt(returnKeyType),
          "returnKeyLabel": from_opt(returnKeyLabel),
          "spellCheck": Js.Boolean.to_js_boolean(spellCheck),
          "textBreakStrategy": from_opt(textBreakStrategy),
          "underlineColorAndroid": from_opt(underlineColorAndroid),
          "clearButtonMode": from_opt(clearButtonMode),
          "clearTextOnFocus": from_opt(clearTextOnFocus),
          "secureTextEntry": Js.Boolean.to_js_boolean(secureTextEntry),
          "selectTextOnFocus": Js.Boolean.to_js_boolean(selectTextOnFocus),
          "selection": from_opt(selection),
          "selectionColor": from_opt(selectionColor),
          "underlineColor": from_opt(underlineColor),
          "multiline": Js.Boolean.to_js_boolean(multiline),
          "numberOfLines": from_opt(numberOfLines),
          "value": from_opt(value),
          "theme": from_opt(theme),
          "style": from_opt(style),
          "onChange": from_opt(onChange),
          "onChangeText": from_opt(onChangeText),
          "onContentSizeChange": from_opt(onContentSizeChange),
          "onKeyPress": from_opt(onKeyPress),
          "onEndEditing": from_opt(onEndEditing),
          "onLayout": from_opt(onLayout),
          "onScroll": from_opt(onScroll),
          "onSelectionChange": from_opt(onSelectionChange),
          "onSubmitEditing": from_opt(onSubmitEditing),
          "onFocus": from_opt(onFocus),
          "onBlur": from_opt(onBlur)
        }
      ),
    children
  );
