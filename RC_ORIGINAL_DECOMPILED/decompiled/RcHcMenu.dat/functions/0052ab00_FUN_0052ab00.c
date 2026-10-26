/*
 * FUN_0052ab00 at 0052ab00
 * undefined1 __register FUN_0052ab00(int * param_1)
 * Address ranges: 0052ab00-0052ab93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 8 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 8 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0052ab00(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((param_1[0x22] != 0) && (cVar1 = (**(code **)(*(int *)param_1[0x22] + 100))(), cVar1 == '\0'))
  {
    FUN_0052b638(param_1,'\x02');
    uVar2 = FUN_00548044((int *)param_1[0x22]);
    return uVar2;
  }
  if ((param_1[0x21] != 0) && (cVar1 = (**(code **)(*(int *)param_1[0x21] + 100))(), cVar1 == '\0'))
  {
    FUN_0052b638(param_1,'\x01');
    uVar2 = FUN_00548044((int *)param_1[0x21]);
    return uVar2;
  }
  FUN_0052b638(param_1,'\0');
  return 0;
}

