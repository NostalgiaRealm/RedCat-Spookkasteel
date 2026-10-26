/*
 * FUN_00483e18 at 00483e18
 * undefined __register FUN_00483e18(int * param_1, char param_2)
 * Address ranges: 00483e18-00483ebe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483e18(int *param_1,char param_2)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_1c = &LAB_00483ebf;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_1[0x5a] == 0) {
    iVar3 = (**(code **)(*param_1 + 0x250))();
    param_1[0x5a] = iVar3;
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  if (param_1[0x5a] == 0) {
    FUN_0047f88c('\x01');
    FUN_00406a48((undefined4 *)PTR_PTR_005724c8,(int *)&local_c);
    piVar4 = FUN_0040ceec((int *)&DAT_0047d30c,'\x01',local_c);
    FUN_0040382c(piVar4);
  }
  iVar3 = param_1[0x5a];
  sVar2 = thunk_FUN_00479935(iVar3);
  if (sVar2 == 0) {
    FUN_004844d4((int)param_1,local_8);
  }
  FUN_00471648(param_1,param_2);
  *in_FS_OFFSET = iVar3;
  puStack_20 = &LAB_00483ec6;
  FUN_00403db0((int *)&local_c);
  return;
}

