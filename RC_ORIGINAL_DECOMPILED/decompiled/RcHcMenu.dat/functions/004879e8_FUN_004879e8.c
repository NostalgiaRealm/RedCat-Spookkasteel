/*
 * FUN_004879e8 at 004879e8
 * undefined __register FUN_004879e8(int param_1)
 * Address ranges: 004879e8-00487a6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004879e8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x228) != '\0') {
    uVar1 = thunk_FUN_00478ffa(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar1);
  }
  iVar2 = FUN_004687b0(*(int *)(param_1 + 0x24));
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      iVar3 = FUN_00468730(*(int *)(param_1 + 0x24),iVar4);
      if (*(char *)(iVar3 + 0x24) != '\0') {
        uVar1 = thunk_FUN_00478ffa(*(undefined4 *)(param_1 + 0x168));
        FUN_0047fe48(uVar1);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

