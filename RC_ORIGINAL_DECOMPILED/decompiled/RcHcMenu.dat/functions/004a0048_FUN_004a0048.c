/*
 * FUN_004a0048 at 004a0048
 * undefined __register FUN_004a0048(int * param_1, int * param_2)
 * Address ranges: 004a0048-004a00eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a0048(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *in_stack_fffffed8;
  char *pcVar4;
  char *pcVar5;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_118 = &LAB_004a00ec;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_0049f134();
  if (bVar1) {
    piVar2 = FUN_0049f0ec(&LAB_0049eb10,extraout_EDX,extraout_ECX);
    FUN_0049f5a0((int)piVar2,*local_c);
    *local_c = 0;
  }
  else {
    pcVar5 = "SafeDeleteAnimationLoader";
    pcVar4 = "Could not delete because the application has already been finalized.";
    in_stack_fffffed8 = "Make sure everything has been freed before the application is closed.";
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4((int *)&local_10,local_110);
    uVar3 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_10,(undefined4 *)in_stack_fffffed8,
                         (undefined4 *)pcVar4,(undefined4 *)pcVar5);
    FUN_0040382c(uVar3);
  }
  *in_FS_OFFSET = in_stack_fffffed8;
  FUN_00403db0((int *)&local_10);
  return;
}

