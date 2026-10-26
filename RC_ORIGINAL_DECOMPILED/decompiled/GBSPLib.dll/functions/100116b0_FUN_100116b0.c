/*
 * FUN_100116b0 at 100116b0
 * undefined FUN_100116b0(void)
 * Address ranges: 100116b0-10011827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100116b0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  iVar1 = FUN_1002770a(param_1,&DAT_10039cf8);
  if (iVar1 != 0) {
    iVar2 = FUN_1002839f(&DAT_10313040,0x18,1,iVar1);
    if (iVar2 == 1) {
      if (DAT_10313040 != DAT_1014e268) {
        (*DAT_1014e35c)(s__WARNING__LoadReceiverFile__Vers_10039c80);
        FUN_10027620(iVar1);
        return 0;
      }
      uVar3 = 0;
      do {
        if ((&DAT_10313044)[uVar3] != (&DAT_1014e26c)[uVar3]) {
          FUN_10027620(iVar1);
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x10);
      if (DAT_10313054 != DAT_10313034) {
        (*DAT_1014e35c)(s__WARNING__LoadReceiverFile__NumP_10039c3c);
        FUN_10027620(iVar1);
        return 0;
      }
      iVar2 = 0;
      if (0 < DAT_10313034) {
        do {
          iVar4 = FUN_1002839f(&param_1,4,1,iVar1);
          if (iVar4 != 1) {
            pcVar6 = s_LoadReceiverFile__Could_not_load_10039c08;
            goto LAB_10011814;
          }
          uVar5 = FUN_10014310(param_1 * 4);
          *(undefined4 *)(*(int *)(DAT_10313038 + iVar2 * 4) + 0x34) = uVar5;
          iVar4 = *(int *)(DAT_10313038 + iVar2 * 4);
          if (*(int *)(iVar4 + 0x34) == 0) {
            (*DAT_1014e358)(s_LoadReceiverFile__Out_of_memory_f_10039bd4);
            FUN_10010220();
            return 0;
          }
          *(undefined2 *)(iVar4 + 0x30) = (undefined2)param_1;
          iVar4 = FUN_1002839f(*(undefined4 *)(*(int *)(DAT_10313038 + iVar2 * 4) + 0x34),4,param_1,
                               iVar1);
          if (iVar4 != param_1) {
            pcVar6 = s_SaveReceiverFile__Could_not_save_10039ba4;
            goto LAB_10011814;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_10313034);
      }
      return 1;
    }
    pcVar6 = s_LoadReceiverFile__Could_not_load_10039cc4;
LAB_10011814:
    (*DAT_1014e358)(pcVar6);
    FUN_10027620(iVar1);
  }
  return 0;
}

