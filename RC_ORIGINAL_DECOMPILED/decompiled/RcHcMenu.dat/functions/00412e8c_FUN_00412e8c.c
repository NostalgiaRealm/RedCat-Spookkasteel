/*
 * FUN_00412e8c at 00412e8c
 * undefined __register FUN_00412e8c(int * param_1, int * param_2)
 * Address ranges: 00412e8c-00412f09;00412f11-00412f20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412e8c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x412ea5;
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_004109dc);
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x412eb1;
    (**(code **)(*param_1 + 0x14))();
    puStack_1c = &LAB_00412f0a;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00412f38(param_1);
    iVar3 = FUN_0041300c((int)param_2);
    if (-1 < iVar3 + -1) {
      iVar5 = 0;
      do {
        uVar2 = FUN_00413014((int)param_2,iVar5);
        piVar4 = (int *)FUN_00412e80((int)param_1);
        (**(code **)(*piVar4 + 8))(piVar4,uVar2);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x412f1b;
    puStack_1c = (undefined1 *)0x412f09;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  puStack_18 = (undefined1 *)0x412f1b;
  FUN_00412a74(param_1,param_2);
  return;
}

