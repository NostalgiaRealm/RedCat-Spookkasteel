/*
 * FUN_10011ee0 at 10011ee0
 * undefined FUN_10011ee0(void)
 * Address ranges: 10011ee0-10011f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10011ee0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  uVar2 = param_1;
  iVar1 = FUN_10011e90(param_1);
  if (iVar1 == 0) {
    (*DAT_1014e35c)(s_Could_not_find_texture___s__in_t_10039ee4,uVar2);
    if (DAT_10313058 == (undefined4 *)0x0) {
      (*DAT_1014e358)(s_Could_not_find_any_textures_in_t_10039eb0);
      return 0;
    }
    uVar2 = *DAT_10313058;
  }
  iVar1 = FUN_100191e0();
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_Could_not_find_get_pallette_for_t_10039f18,uVar2);
    return 0;
  }
  iVar1 = 0;
  puVar3 = (undefined1 *)(param_2 + 2);
  do {
    FUN_1001a170(&param_1,&param_2,auStack_8,auStack_4);
    puVar3[-2] = (undefined1)param_1;
    puVar3[-1] = (undefined1)param_2;
    *puVar3 = auStack_8[0];
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar1 < 0xff);
  return 1;
}

