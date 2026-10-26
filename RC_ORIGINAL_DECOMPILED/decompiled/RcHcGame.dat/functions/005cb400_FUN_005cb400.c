/*
 * FUN_005cb400 at 005cb400
 * undefined FUN_005cb400(void)
 * Address ranges: 005cb400-005cb69c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005cb400(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [12];
  undefined1 local_2c [44];
  
  iVar4 = *(int *)(param_1 + 0x18);
  DAT_006cc590 = iVar4 + 200;
  DAT_006cc510 = *(undefined4 *)(iVar4 + 0x114);
  DAT_006cc4c8 = *(undefined4 *)(iVar4 + 300);
  DAT_006cc4c4 = *(undefined4 *)(iVar4 + 0x11c);
  DAT_006cc514 = *(undefined4 *)(iVar4 + 0x138);
  uVar1 = *param_6;
  uVar2 = param_6[1];
  _DAT_006cc4d8 = *param_4;
  uVar3 = param_6[2];
  _DAT_006cc4dc = param_4[1];
  _DAT_006cc4e0 = param_4[2];
  _DAT_006cc570 = *param_5;
  _DAT_006cc574 = param_5[1];
  _DAT_006cc578 = param_5[2];
  FUN_005b2fe0(&DAT_006cc4b8);
  _DAT_006cc4f8 = DAT_006cc4b8;
  _DAT_006cc4fc = DAT_006cc4bc;
  _DAT_006cc500 = DAT_006cc4c0;
  FUN_005b3730(&local_44);
  FUN_005b3730(local_38);
  FUN_005b3000(&DAT_006cc4b8);
  FUN_005b3000(&DAT_006cc4f8);
  FUN_005cb6a0(param_4,param_5,&DAT_006cc4b8,&DAT_006cc4f8,&DAT_006cc4e8,&DAT_006cc580);
  _DAT_006cc524 = 0x461c3c00;
  DAT_006cc598 = 0;
  FUN_005cb340(*(undefined4 *)(*(int *)(param_2 + 0x40) * 0x50 + *(int *)(DAT_006cc590 + 0x48)));
  if (DAT_006cc598 == 0) {
    *param_7 = uVar1;
    param_7[1] = uVar2;
    param_7[2] = uVar3;
    return 1;
  }
  FUN_005b35b0(&DAT_006cc530);
  FUN_005b2fe0(&local_44);
  FUN_005b3470(&DAT_006cc560);
  FUN_005b3000(&local_44);
  DAT_006cc564 = local_40;
  DAT_006cc568 = local_3c;
  DAT_006cc560 = local_44;
  fVar5 = (float10)FUN_005b2e40();
  _DAT_006cc53c = (float)fVar5;
  FUN_005b3020(0x3dcccccd,&DAT_006cc560);
  iVar4 = FUN_005c9e70(param_1,param_4,param_5,param_6,&DAT_006cc560,0x43,7,0xffffffff,0,0,local_2c)
  ;
  if (iVar4 != 0) {
    *param_7 = uVar1;
    param_7[1] = uVar2;
    param_7[2] = uVar3;
    return 0;
  }
  *param_7 = DAT_006cc560;
  param_7[1] = DAT_006cc564;
  param_7[2] = DAT_006cc568;
  return 1;
}

