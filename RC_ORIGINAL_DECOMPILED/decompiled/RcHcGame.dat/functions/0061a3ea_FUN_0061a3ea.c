/*
 * FUN_0061a3ea at 0061a3ea
 * undefined FUN_0061a3ea(void)
 * Address ranges: 0061a3ea-0061a566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061a3ea(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (DAT_007101c4 == (code *)0x0) {
    iVar1 = FUN_0061ab1b();
    if (iVar1 == 0) {
      DAT_007101c4 = FUN_0061ab51;
    }
    else {
      DAT_007101c4 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_007101b4 = param_1;
    if (*param_1 != '\0') {
      FUN_0061a567(&PTR_s_american_006b35f0,0x40,&DAT_007101b4);
    }
    DAT_007101b8 = param_1 + 0x40;
    if ((DAT_007101b8 != (char *)0x0) && (*DAT_007101b8 != '\0')) {
      FUN_0061a567(&PTR_s_america_006b3538,0x16,&DAT_007101b8);
    }
    DAT_007101bc = 0;
    if ((DAT_007101b4 != (char *)0x0) && (*DAT_007101b4 != '\0')) {
      if ((DAT_007101b8 == (char *)0x0) || (*DAT_007101b8 == '\0')) {
        FUN_0061a84a();
      }
      else {
        FUN_0061a5bf();
      }
      goto LAB_0061a4a7;
    }
    if ((DAT_007101b8 != (char *)0x0) && (*DAT_007101b8 != '\0')) {
      FUN_0061a95d();
      goto LAB_0061a4a7;
    }
  }
  FUN_0061aa1a();
LAB_0061a4a7:
  if ((((DAT_007101bc == 0) || (uVar2 = FUN_0061aa34(param_1 + 0x80), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_007101a4,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_007101a4;
    param_2[1] = (undefined2)DAT_007101c0;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_007101c4)(DAT_007101a4,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_007101c4)(DAT_007101c0,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0061dc9e(uVar2,param_3 + 0x80,10);
  }
  return 1;
}

