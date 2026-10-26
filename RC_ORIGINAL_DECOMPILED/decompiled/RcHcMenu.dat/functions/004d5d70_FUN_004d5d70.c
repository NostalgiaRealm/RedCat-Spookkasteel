/*
 * FUN_004d5d70 at 004d5d70
 * undefined __register FUN_004d5d70(int param_1, char param_2)
 * Address ranges: 004d5d70-004d5dbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d5d70(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != *(char *)(param_1 + 0x19)) {
    if (param_2 == '\0') {
      uVar3 = *(uint *)(param_1 + 4);
      piVar1 = (int *)(uVar3 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      if (SBORROW4(iVar2,1)) {
        thunk_FUN_00402874(uVar3);
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 4);
      piVar1 = (int *)(uVar3 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_00402874(uVar3);
      }
    }
    *(char *)(param_1 + 0x19) = param_2;
  }
  return;
}

