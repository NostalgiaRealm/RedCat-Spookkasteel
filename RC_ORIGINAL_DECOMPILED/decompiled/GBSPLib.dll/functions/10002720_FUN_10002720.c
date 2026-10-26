/*
 * FUN_10002720 at 10002720
 * undefined FUN_10002720(void)
 * Address ranges: 10002720-100027e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002720(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  (*DAT_1014e35c)(s_____Update_Entities_____100364a4);
  iVar1 = FUN_1000ba50(param_1);
  if (iVar1 != 0) {
    FUN_10002610();
    iVar1 = FUN_10005270(param_2);
    if (iVar1 == 0) {
      pcVar2 = s_UpdateEntities__Could_not_load___10036478;
    }
    else {
      if (DAT_1014e2f4 != 0) {
        FUN_10014360(DAT_1014e2f4);
        _DAT_1003fde8 = 0;
        DAT_1014e2f4 = 0;
      }
      DAT_1014e2cc = 0;
      iVar1 = FUN_1000b890();
      if (iVar1 == 0) {
        (*DAT_1014e358)(s_UpdateEntities__ConvertEntitiesT_10036440);
        return 0;
      }
      iVar1 = FUN_100056d0(param_2);
      if (iVar1 != 0) {
        FUN_1000b950();
        FUN_100052c0();
        return 1;
      }
      pcVar2 = s_UpdateEntities__SaveGBSPFile_fai_10036418;
    }
    (*DAT_1014e358)(pcVar2);
  }
  FUN_1000b950();
  FUN_100052c0();
  return 0;
}

