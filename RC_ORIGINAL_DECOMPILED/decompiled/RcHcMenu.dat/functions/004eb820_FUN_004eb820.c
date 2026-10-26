/*
 * FUN_004eb820 at 004eb820
 * bool __register FUN_004eb820(int param_1, int * param_2)
 * Address ranges: 004eb820-004eb897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 21 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 21 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

bool FUN_004eb820(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_d;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar2 = *param_2;
    *param_2 = -*param_2;
    if (SBORROW4(0,iVar2)) {
      thunk_FUN_00402874((uint)param_2);
    }
  }
  uVar1 = FUN_004714b4(*(int *)(param_1 + 0x30));
  if ((char)uVar1 == '\0') {
    *param_2 = 0;
    local_d = false;
  }
  else {
    iVar2 = FUN_0047345c(*(int **)(param_1 + 0x30),*param_2);
    *param_2 = iVar2;
    local_d = *param_2 != 0;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar2 = *param_2;
    *param_2 = -*param_2;
    if (SBORROW4(0,iVar2)) {
      thunk_FUN_00402874((uint)param_2);
    }
  }
  return local_d;
}

