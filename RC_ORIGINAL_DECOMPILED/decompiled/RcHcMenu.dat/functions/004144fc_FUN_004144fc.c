/*
 * FUN_004144fc at 004144fc
 * undefined4 __register FUN_004144fc(int * param_1, undefined * param_2, undefined4 param_3)
 * Address ranges: 004144fc-00414533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 20 for TStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 20 for
   TStringList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004144fc(int *param_1,undefined *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c;
  
  local_c = param_3;
  if ((char)param_1[6] == '\0') {
    local_c = FUN_00413a94(param_1,param_2);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&local_c);
    if (cVar1 == '\0') {
      local_c = 0xffffffff;
    }
  }
  return local_c;
}

