/*
 * FUN_005d4ec0 at 005d4ec0
 * undefined FUN_005d4ec0(void)
 * Address ranges: 005d4ec0-005d4f4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d4ec0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x1c4);
  piVar7 = *(int **)(param_1 + 0x130);
  iVar4 = *(int *)(param_1 + 0x144);
  local_4 = 0;
  if (*(int *)(param_1 + 0x188) < 1) {
    return 1;
  }
  do {
    iVar6 = 0;
    if (0 < piVar7[1]) {
      do {
        iVar5 = *piVar7 + iVar6;
        iVar6 = iVar6 + 1;
        iVar1 = iVar4 + iVar5 * 0xc;
        iVar2 = iVar3 + iVar5 * 0x18;
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + iVar5 * 0xc);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 8);
      } while (iVar6 < piVar7[1]);
    }
    local_4 = local_4 + 1;
    piVar7 = piVar7 + 9;
  } while (local_4 < *(int *)(param_1 + 0x188));
  return 1;
}

