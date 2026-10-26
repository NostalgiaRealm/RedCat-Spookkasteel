/*
 * FUN_100020a0 at 100020a0
 * undefined4 __stdcall FUN_100020a0(void)
 * Address ranges: 100020a0-100021dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100020a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (DAT_101f55c4 < 2) {
    DAT_101f55a0 = 0;
    DAT_101f55a4 = 0;
    iVar2 = _grTexMinAddress_4(0);
    uVar1 = _grTexMaxAddress_4(0);
    lVar4 = __ftol();
    iVar3 = iVar2 - (int)lVar4;
    DAT_101f5528 = FUN_10001f50(0,iVar2,iVar3);
    if (DAT_101f5528 == 0) goto LAB_100021c1;
    DAT_101f552c = FUN_10001f50(0,iVar3 + 1,uVar1);
  }
  else {
    DAT_101f55a0 = 0;
    DAT_101f55a4 = 1;
    uVar1 = _grTexMaxAddress_4(0);
    uVar5 = 0;
    uVar1 = _grTexMinAddress_4(0,uVar1);
    DAT_101f5528 = FUN_10001f50(0,uVar1,uVar5);
    if (DAT_101f5528 == 0) goto LAB_100021c1;
    uVar5 = 1;
    uVar1 = _grTexMaxAddress_4();
    uVar1 = _grTexMinAddress_4(1,uVar1);
    DAT_101f552c = FUN_10001f50(1,uVar1,uVar5);
  }
  if ((DAT_101f552c != 0) &&
     (DAT_101f5524 = FUN_10001110(s_Texture_Cache_1000e4cc,DAT_101f5528),
     DAT_101f5524 != (char *)0x0)) {
    DAT_101f5534 = FUN_10001110(s_Lightmap_Cache_1000e4bc,DAT_101f552c);
    if (DAT_101f5534 != (char *)0x0) {
      return 1;
    }
  }
LAB_100021c1:
  FUN_100022e0();
  FUN_10002200();
  return 0;
}

