/*
 * FUN_0052aa6c at 0052aa6c
 * undefined1 __register FUN_0052aa6c(int * param_1)
 * Address ranges: 0052aa6c-0052aaff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 5 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 5 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0052aa6c(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((param_1[0x21] != 0) && (cVar1 = (**(code **)(*(int *)param_1[0x21] + 100))(), cVar1 == '\0'))
  {
    FUN_0052b638(param_1,'\x01');
    uVar2 = FUN_00547a58((int *)param_1[0x21]);
    return uVar2;
  }
  if ((param_1[0x22] != 0) && (cVar1 = (**(code **)(*(int *)param_1[0x22] + 100))(), cVar1 == '\0'))
  {
    FUN_0052b638(param_1,'\x02');
    uVar2 = FUN_00547a58((int *)param_1[0x22]);
    return uVar2;
  }
  FUN_0052b638(param_1,'\0');
  return 0;
}

