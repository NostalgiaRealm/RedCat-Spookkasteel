/*
 * FUN_0043d9e4 at 0043d9e4
 * undefined4 __register FUN_0043d9e4(int param_1, int param_2)
 * Address ranges: 0043d9e4-0043da40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0043d9e4(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  int iVar7;
  
  bVar1 = FUN_004486a4(*(uint *)(param_2 + 8));
  sVar2 = FUN_00440854(*(short *)(param_2 + 4),bVar1);
  iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < iVar7 + -1) {
    iVar6 = 0;
    do {
      iVar3 = FUN_00412384(*(undefined4 **)(param_1 + 0x24),iVar6);
      if (sVar2 == *(short *)(iVar3 + 0x68)) {
        piVar4 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x24),iVar6);
        uVar5 = FUN_00403270(piVar4,extraout_EDX,extraout_ECX);
        return uVar5;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 0;
}

