/*
 * FUN_10006790 at 10006790
 * undefined FUN_10006790(void)
 * Address ranges: 10006790-10006886
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006790(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar2 = 0;
  local_c = 4;
  local_8 = 0x3c;
  local_4 = DAT_1014e290;
  FUN_10004d50(&local_c,0,param_1);
  DAT_1014e364 = 0;
  DAT_1014e2b8 = FUN_10014310(DAT_1014e29c * 4);
  DAT_1014e29c = 0;
  if (0 < DAT_1003fdf4) {
    puVar3 = &DAT_100dc1f8;
    do {
      iVar1 = FUN_10006640(*puVar3,param_1);
      if (iVar1 == 0) {
        (*DAT_1014e358)(s_SaveGFXLeafs__SaveGFXLeafs_r_fai_100372d0);
        return 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x39;
    } while (iVar2 < DAT_1003fdf4);
  }
  if (DAT_1014e364 != local_4 * local_8) {
    (*DAT_1014e358)(s_SaveGFXLeafs__Leaf_sizes_don_t_m_100372f8);
  }
  local_c = 0xc;
  local_8 = 4;
  local_4 = DAT_1014e29c;
  FUN_10004d50(&local_c,DAT_1014e2b8,param_1);
  return 1;
}

