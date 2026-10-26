/*
 * FUN_00532e84 at 00532e84
 * undefined __register FUN_00532e84(int * param_1, int * param_2)
 * Address ranges: 00532e84-00532f29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00532e84(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_00531904);
  FUN_0053282c(iVar1,param_2);
  if (param_2 == (int *)0x0) {
    iVar1 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 0x97) & 4) != 0) {
    FUN_00548cf4((int *)param_1[0xa5],param_2,0);
    piVar2 = (int *)FUN_00533c14((int)param_1);
    iVar1 = FUN_005285b8(piVar2);
    uVar3 = FUN_00523748(iVar1);
    iVar1 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
  }
  (**(code **)(*param_1 + 0xe8))();
  return;
}

