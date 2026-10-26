/*
 * FUN_00546d70 at 00546d70
 * undefined __register FUN_00546d70(int param_1, int * param_2)
 * Address ranges: 00546d70-00546db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 26 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 26 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00546d70(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_004ee2d0(*(int **)(param_1 + 0x84));
  if ((char)uVar1 == '\0') {
    FUN_00494398(param_2);
  }
  else {
    piVar2 = (int *)FUN_004eee98(*(int **)(param_1 + 0x84));
    FUN_00493768(param_2,piVar2);
  }
  return;
}

