/*
 * FUN_00435610 at 00435610
 * undefined __register FUN_00435610(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00435610-004356e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435610(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00403270(param_2,param_1,param_3);
  FUN_00433700((int)param_1,0xb02c,param_2,1);
  FUN_0043557c((int)param_1,param_2);
  if ((*(byte *)(param_2 + 0x11) & 8) == 0) {
    FUN_00433700((int)param_2,0xb009,0,0);
    FUN_00433700((int)param_2,0xb008,0,0);
    FUN_00433700((int)param_2,0xb023,0,0);
    FUN_00433700((int)param_2,0xb03d,0,0);
    uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0042ebec);
    if ((char)uVar2 == '\0') {
      bVar1 = FUN_00438c84((int)param_1);
      if (bVar1) {
        (**(code **)(*param_2 + 0x74))();
      }
    }
    else {
      FUN_00433700((int)param_2,0xb011,0,0);
      FUN_00435f34(param_1);
    }
    FUN_00435270(param_1,param_2);
  }
  FUN_00433700((int)param_1,0xb036,param_2,1);
  return;
}

