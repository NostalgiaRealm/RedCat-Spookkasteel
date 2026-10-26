/*
 * FUN_0043a938 at 0043a938
 * undefined __register FUN_0043a938(int * param_1, char param_2, int param_3)
 * Address ranges: 0043a938-0043aa43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a938(int *param_1,char param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x43a94d;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
  }
  puStack_30 = (undefined1 *)0x43a960;
  FUN_00403064(param_1,'\0',param_3);
  param_1[3] = 4;
  param_1[5] = param_3;
  param_1[0x1c] = 0x40000;
  param_1[6] = 0xc;
  if ((*(char *)(param_3 + 0x4b) == '\x01') || (*(char *)(param_3 + 0x4b) == '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 7) = uVar1;
  puStack_30 = (undefined1 *)0x43a9b0;
  iVar2 = FUN_0043a48c((int *)&LAB_0042f688,'\x01',(int)param_1);
  param_1[0x19] = iVar2;
  puStack_30 = (undefined1 *)0x43a9c2;
  piVar3 = FUN_0041c16c((int *)&PTR_FUN_0041a6d0,'\x01',extraout_ECX_00);
  param_1[4] = (int)piVar3;
  puStack_30 = (undefined1 *)0x43a9d6;
  uVar4 = FUN_004230a8(0,0xffffff);
  puStack_30 = (undefined1 *)0x43a9df;
  FUN_0041c2ec(piVar3,uVar4);
  puStack_30 = (undefined1 *)0x43a9e7;
  FUN_0043ab00((int)param_1);
  puStack_34 = &LAB_0043aa44;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  iVar2 = FUN_0043579c(param_3);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      uVar6 = 0;
      uVar4 = FUN_00435760(param_3,iVar5);
      (**(code **)(*param_1 + 8))(param_1,uVar4,3,uVar6);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0043a668(param_1[0x19]);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0043aa4b;
  puStack_34 = (undefined1 *)0x43aa43;
  FUN_0043ab04((int)param_1);
  return;
}

