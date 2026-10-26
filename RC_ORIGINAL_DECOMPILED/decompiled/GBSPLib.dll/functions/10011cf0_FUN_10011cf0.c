/*
 * FUN_10011cf0 at 10011cf0
 * undefined FUN_10011cf0(void)
 * Address ranges: 10011cf0-10011e8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10011cf0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_10011e90(param_1);
  if (iVar1 == 0) {
    (*DAT_1014e35c)(s_Could_not_find_texture___s__in_t_10039ee4,param_1);
    if (DAT_10313058 == (undefined4 *)0x0) {
      (*DAT_1014e358)(s_Could_not_find_any_textures_in_t_10039eb0);
      return 0;
    }
    param_1 = *DAT_10313058;
  }
  iVar1 = FUN_10018d90();
  *param_4 = iVar1;
  iVar1 = FUN_10018da0();
  *param_5 = iVar1;
  if ((0x100 < *param_4) || (0x100 < iVar1)) {
    (*DAT_1014e358)(s_Texture___s__has_a_dimension_big_10039e04,param_1);
    return 0;
  }
  *param_3 = 0;
  FUN_10018090(1);
  FUN_10018090(2);
  FUN_10018090(3);
  iVar1 = 0;
  do {
    iVar2 = FUN_10016730(iVar1,iVar1,1,1,0xff00ff);
    if (iVar2 == 0) {
      (*DAT_1014e358)(s_Could_not_get_mip_level__d_for_t_10039e80,iVar1,param_1);
      return 0;
    }
    iVar2 = FUN_10016ac0();
    if (iVar2 == 0) {
      (*DAT_1014e358)(s_Could_not_get_mip_bits_for_textu_10039e54,iVar1,param_1);
      return 0;
    }
    iVar2 = 1 << ((byte)iVar1 & 0x1f);
    iVar3 = (*param_5 / iVar2) * (*param_4 / iVar2);
    iVar2 = FUN_10014a20(iVar3);
    if (iVar2 != 1) {
      (*DAT_1014e358)(s_Could_not_write_texture_data__10039e34);
      return 0;
    }
    FUN_10016aa0();
    iVar1 = iVar1 + 1;
    *param_3 = *param_3 + iVar3;
  } while (iVar1 < 4);
  return 1;
}

