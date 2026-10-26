/*
 * FUN_10006fa0 at 10006fa0
 * undefined4 __stdcall FUN_10006fa0(void)
 * Address ranges: 10006fa0-100070aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006fa0(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  puVar1 = &DAT_10028b80;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x20;
  } while ((int)puVar1 < 0x100ec080);
  DAT_100ec0f0 = FUN_10005eb0(DAT_10028938);
  if (DAT_100ec0f0 != (undefined4 *)0x0) {
    FUN_10005f10((int)DAT_100ec0f0);
    lVar4 = __ftol();
    DAT_100ec080 = FUN_10005f20((int)DAT_100ec0f0,(uint)lVar4);
    if (DAT_100ec080 != (int *)0x0) {
      uVar2 = FUN_10005f10((int)DAT_100ec0f0);
      DAT_100ec084 = FUN_10005f20((int)DAT_100ec0f0,uVar2);
      if (DAT_100ec084 != (int *)0x0) {
        DAT_100ec088 = FUN_10005290(s_Main_Texture_Cache_10018aa0,DAT_1001bcb0,DAT_100ec080,
                                    DAT_10028944);
        if (DAT_100ec088 != (char *)0x0) {
          DAT_100ec0f4 = FUN_10005290(s_Lightmap_Cache_10018ab4,DAT_1001bcb0,DAT_100ec084,
                                      DAT_10028944);
          if (DAT_100ec0f4 != (char *)0x0) {
            iVar3 = FUN_10007690();
            if (iVar3 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_100070b0();
  return 0;
}

