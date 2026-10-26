/*
 * FUN_00419464 at 00419464
 * undefined __register FUN_00419464(int * param_1, uint * param_2)
 * Address ranges: 00419464-004194ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419464(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  uint *local_14;
  undefined1 local_10;
  
  bVar3 = &stack0x00000000 == (undefined1 *)0x14;
  FUN_00404140((uint *)param_1[2],param_2);
  if (!bVar3) {
    if (param_2 != (uint *)0x0) {
      uVar2 = FUN_00409b74((char *)param_2);
      if ((char)uVar2 == '\0') {
        local_10 = 0xb;
        local_14 = param_2;
        uVar2 = FUN_0040cfe4((int)&DAT_00410664,'\x01',(undefined4 *)PTR_PTR_0057231c,0,&local_14);
        FUN_0040382c(uVar2);
      }
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1,param_1[2],param_2);
    }
    FUN_004195e4((int)param_1,'\0');
    FUN_004194f0((int)param_1,param_2);
    FUN_004195e4((int)param_1,'\x01');
  }
  return;
}

