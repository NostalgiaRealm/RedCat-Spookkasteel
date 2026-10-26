/*
 * FUN_0047324c at 0047324c
 * undefined __register FUN_0047324c(int * param_1, int param_2)
 * Address ranges: 0047324c-004732a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 32 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 32 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_0047324c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  param_1[0x15] = param_2;
  if (*(char *)((int)param_1 + 0x8d) != '\v') {
    (**(code **)(*param_1 + 0x94))(param_1,param_2);
    iVar1 = FUN_004687b0(param_1[9]);
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        piVar2 = (int *)FUN_00468730(param_1[9],iVar3);
        if (*(char *)((int)piVar2 + 0x36) == '\x02') {
          FUN_00468c28(piVar2);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  (**(code **)(*param_1 + 0x100))();
  return;
}

