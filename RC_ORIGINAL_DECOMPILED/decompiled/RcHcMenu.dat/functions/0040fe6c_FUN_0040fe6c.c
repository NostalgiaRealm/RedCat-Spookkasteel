/*
 * FUN_0040fe6c at 0040fe6c
 * undefined __register FUN_0040fe6c(undefined4 param_1, undefined4 * param_2)
 * Address ranges: 0040fe6c-0040feb0;0040feee-0040ff02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040fe6c(undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  code *extraout_ECX;
  int extraout_EDX;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uStack_10;
  
  iVar4 = (uint)*(byte *)(*(int *)*param_2 + 2 + (uint)*(byte *)(*(int *)*param_2 + 1)) * 4;
  if (*(char *)((int)param_2 + 0xb) == -1) {
    uStack_10 = 0x40fefd;
    (**(code **)(&DAT_0040fec5 + iVar4))(param_1,param_2,param_2[2] & 0xffffff);
  }
  else {
    pcVar1 = *(code **)(&DAT_0040fec5 + iVar4);
    puVar5 = (undefined1 *)((int)&uStack_10 + -*(int *)(&DAT_0040feb1 + iVar4));
    *(undefined4 *)((int)&uStack_10 + -*(int *)(&DAT_0040feb1 + iVar4)) = 0x40fe9b;
    piVar3 = (int *)(*pcVar1)();
    uVar2 = *(undefined4 *)(extraout_EDX + 0x10);
    if (*(byte *)(extraout_EDX + 0xb) < 0xfe) {
      *(undefined4 *)(puVar5 + -4) = 0x40feaf;
      (*extraout_ECX)(piVar3,uVar2);
    }
    else {
      pcVar1 = *(code **)((int)(short)extraout_ECX + *piVar3);
      *(undefined4 *)(puVar5 + -4) = 0x40feab;
      (*pcVar1)();
    }
  }
  return;
}

