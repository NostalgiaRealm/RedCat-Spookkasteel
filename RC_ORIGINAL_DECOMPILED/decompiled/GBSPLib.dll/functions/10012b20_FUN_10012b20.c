/*
 * FUN_10012b20 at 10012b20
 * undefined FUN_10012b20(void)
 * Address ranges: 10012b20-10012cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10012b20(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  DAT_104e98d4 = FUN_10014310(DAT_104e98c8);
  if (DAT_104e98d4 != 0) {
    iVar4 = 0;
    if (0 < DAT_104e98dc) {
      do {
        FUN_10013a70(iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_104e98dc);
    }
    if (DAT_1014e350 == 0) {
      FUN_100138d0();
      if ((DAT_1003a0e4 != 0) && (iVar4 = FUN_10014180(), iVar4 == 0)) {
        return 0;
      }
      FUN_10014360(DAT_104e98d4);
      _DAT_1003fde8 = 0;
      DAT_104e98d4 = 0;
      DAT_104e98b0 = (undefined4 *)FUN_10014310(DAT_104e98bc * DAT_104e98dc);
      if (DAT_104e98b0 == (undefined4 *)0x0) {
        (*DAT_1014e358)(s_VisAllLeafs__Out_of_memory_for_L_1003a204);
        FUN_10013740();
        return 0;
      }
      uVar2 = DAT_104e98bc * DAT_104e98dc;
      puVar5 = DAT_104e98b0;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      DAT_104e98a8 = 0;
      DAT_104e98cc = FUN_10014310(DAT_104e98d8);
      if (DAT_104e98cc != 0) {
        iVar4 = 0;
        if (0 < DAT_104e98dc) {
          do {
            DAT_104e98ac = 0;
            iVar1 = FUN_10012cc0(iVar4);
            if (iVar1 == 0) goto LAB_10012b70;
            DAT_104e98a8 = DAT_104e98a8 + DAT_104e98ac;
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_104e98dc);
        }
        FUN_10014360(DAT_104e98cc);
        DAT_104e98cc = 0;
        _DAT_1003fde8 = 0;
        (*DAT_1014e35c)(s_Total_visible_areas____5i_1003a1dc,DAT_104e98a8);
        (*DAT_1014e35c)(s_Average_visible_from_each_area____1003a1b4,DAT_104e98a8 / DAT_104e98dc);
        return 1;
      }
    }
    else {
      (*DAT_1014e35c)(s_Cancel_requested____10036a5c);
    }
  }
LAB_10012b70:
  FUN_10013740();
  return 0;
}

