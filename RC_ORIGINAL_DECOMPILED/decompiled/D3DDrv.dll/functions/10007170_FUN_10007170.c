/*
 * FUN_10007170 at 10007170
 * undefined4 __stdcall FUN_10007170(void)
 * Address ranges: 10007170-10007260
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007170(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  DAT_101c36f0 = FUN_100053c0(DAT_10038e68);
  if (DAT_101c36f0 != (undefined4 *)0x0) {
    FUN_10005470((int)DAT_101c36f0);
    lVar3 = __ftol();
    DAT_101c3668 = FUN_10005400((int)DAT_101c36f0,(uint)lVar3);
    if (DAT_101c3668 != (int *)0x0) {
      uVar1 = FUN_10005470((int)DAT_101c36f0);
      DAT_101c366c = FUN_10005400((int)DAT_101c36f0,uVar1);
      if (DAT_101c366c != (int *)0x0) {
        DAT_101c3670 = FUN_100047a0(s_Main_Texture_Cache_100155ac,DAT_100274a8,DAT_101c3668,
                                    DAT_10038e74);
        if (DAT_101c3670 != (char *)0x0) {
          DAT_101c36f4 = FUN_100047a0(s_Lightmap_Cache_1001559c,DAT_100274a8,DAT_101c366c,
                                      DAT_10038e74);
          if (DAT_101c36f4 != (char *)0x0) {
            iVar2 = FUN_10007840();
            if (iVar2 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_10007270();
  return 0;
}

