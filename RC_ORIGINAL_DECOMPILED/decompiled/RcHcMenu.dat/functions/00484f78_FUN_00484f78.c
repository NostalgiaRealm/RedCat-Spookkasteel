/*
 * FUN_00484f78 at 00484f78
 * byte __register FUN_00484f78(int * param_1, int * param_2, byte * param_3)
 * Address ranges: 00484f78-00485015
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_00484f78(int *param_1,int *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbStack_14;
  
  pbStack_14 = param_3;
  iVar3 = (**(code **)(*param_2 + 0x74))();
  if (iVar3 < 1) {
    if (*(char *)((int)param_1 + 0x8d) == '\n') {
      pbStack_14 = (byte *)FUN_004730e4((int)param_1);
      bVar2 = true;
    }
    else {
      bVar2 = FUN_0048493c(param_1,(int *)&pbStack_14);
    }
    if (((bool)bVar2 != false) &&
       (((cVar1 = *(char *)((int)param_1 + 0x8d), (byte)(cVar1 - 1U) < 3 || (cVar1 == '\x05')) ||
        (cVar1 == '\n')))) {
      pbStack_14 = pbStack_14 + (uint)*(ushort *)(param_1 + 0x7a) + param_2[0x10];
      bVar2 = *pbStack_14;
      if ((bVar2 != 0) && (param_3 != (byte *)0x0)) {
        uVar5 = (**(code **)(*param_2 + 0x68))();
        FUN_00402944((undefined4 *)(pbStack_14 + 1),(undefined4 *)param_3,uVar5);
      }
    }
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x74))();
    bVar2 = (**(code **)(*param_1 + 0x22c))(param_1,uVar4,param_3);
  }
  return bVar2;
}

