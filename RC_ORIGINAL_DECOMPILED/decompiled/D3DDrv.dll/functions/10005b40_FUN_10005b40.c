/*
 * FUN_10005b40 at 10005b40
 * undefined4 __stdcall FUN_10005b40(void)
 * Address ranges: 10005b40-10005d2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005b40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_10116d80 != 0) {
    iVar2 = FUN_10007a50();
    if (iVar2 == 0) {
      return 0;
    }
    if (DAT_10038e74 != 0) {
      (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,1,1);
      (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,4,1);
      FUN_10001870(1,0);
    }
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,0xb,0);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,2,2);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,3,0);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,1,4);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,5,2);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,6,0);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,4,4);
    FUN_100019c0(5,6);
    FUN_10001a10(1);
    FUN_10005d30();
    iVar2 = 0;
    if (0 < DAT_10116d80) {
      piVar4 = &DAT_1010c980;
      do {
        piVar1 = (int *)*piVar4;
        FUN_10001b20((uint)((*(byte *)(piVar1 + 1) & 4) == 0));
        FUN_10001ae0((uint)((*(byte *)(piVar1 + 1) & 8) == 0));
        FUN_10001a40(0,(uint)((*(byte *)(piVar1 + 1) & 0x10) == 0));
        iVar3 = FUN_10005a80(0,*piVar1,piVar1[2]);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_10001920(&DAT_1010cd80 + piVar1[3] * 0x28,piVar1[4]);
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < DAT_10116d80);
    }
    FUN_10001ae0(1);
    FUN_10001b20(1);
    DAT_10116d80 = 0;
    DAT_10116d84 = 0;
    (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x32,0);
    (**(code **)(*DAT_100274c8 + 0x28))(DAT_100274c8);
    (**(code **)(*DAT_100274c8 + 0x24))(DAT_100274c8);
  }
  return 1;
}

