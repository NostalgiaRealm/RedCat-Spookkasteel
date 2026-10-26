/*
 * FUN_00472c90 at 00472c90
 * undefined __register FUN_00472c90(int * param_1)
 * Address ranges: 00472c90-00472d10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472c90(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iStack_14;
  
  cVar1 = (**(code **)(*param_1 + 0x1f0))();
  if (cVar1 != '\0') {
    iVar6 = 1;
    param_1[0xf] = 0;
    iStack_14 = *(int *)(param_1[0xe] + 8) + -1;
    uVar4 = extraout_ECX;
    if (-1 < iStack_14) {
      do {
        iVar2 = FUN_00412384((undefined4 *)param_1[0xe],iStack_14);
        iVar5 = *(int *)(*(int *)(iVar2 + 0x28) + 8) + -1;
        uVar4 = extraout_ECX_00;
        if (-1 < iVar5) {
          do {
            iVar3 = FUN_00412384(*(undefined4 **)(iVar2 + 0x28),iVar5);
            *(int *)(iVar3 + 8) = param_1[0xf];
            param_1[0xf] = iVar3;
            if (iVar6 < *(int *)(iVar3 + 0xc)) {
              iVar6 = *(int *)(iVar3 + 0xc);
            }
            iVar5 = iVar5 + -1;
            uVar4 = extraout_ECX_01;
          } while (iVar5 != -1);
        }
        iStack_14 = iStack_14 + -1;
      } while (iStack_14 != -1);
    }
    FUN_00472bb4(param_1,iVar6,uVar4);
  }
  return;
}

