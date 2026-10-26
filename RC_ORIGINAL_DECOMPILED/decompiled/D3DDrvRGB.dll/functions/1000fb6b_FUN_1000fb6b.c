/*
 * FUN_1000fb6b at 1000fb6b
 * undefined __cdecl FUN_1000fb6b(uint param_1, int * param_2, ushort * param_3)
 * Address ranges: 1000fb6b-1000fc3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000fb6b(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_1000fbb0:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_1000fbb0;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_1000fc06;
    }
    if (iVar2 != 8) goto LAB_1000fc06;
    uVar3 = 0x10;
  }
  bVar1 = FUN_10011d5b(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_10011aa8(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_1000fc06:
  FUN_10011fba();
  if (((*param_2 != 8) && (DAT_10019a68 == 0)) && (iVar2 = FUN_10011f9a(), iVar2 != 0)) {
    return;
  }
  FUN_10011f72(*param_2);
  return;
}

