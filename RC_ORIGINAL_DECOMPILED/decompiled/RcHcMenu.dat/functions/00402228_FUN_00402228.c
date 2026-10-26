/*
 * FUN_00402228 at 00402228
 * uint * __register FUN_00402228(int param_1)
 * Address ranges: 00402228-0040239b;004023a3-004023ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00402228(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  if ((DAT_00573430 == '\0') && (cVar2 = FUN_00401b54(), cVar2 == '\0')) {
    return (uint *)0x0;
  }
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_00573049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  puVar4 = DAT_0057348c;
  uVar5 = param_1 + 7U & 0xfffffffc;
  if ((int)uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if ((int)uVar5 < 0x1001) {
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 3;
    }
    puVar1 = *(uint **)(DAT_00573490 + -0xc + ((int)uVar3 >> 2) * 4);
    if (puVar1 != (uint *)0x0) {
      *(uint *)((int)puVar1 + uVar5) = *(uint *)((int)puVar1 + uVar5) & 0xfffffffe;
      puVar4 = (uint *)puVar1[1];
      if (puVar1 == puVar4) {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(undefined4 *)(DAT_00573490 + -0xc + ((int)uVar3 >> 2) * 4) = 0;
      }
      else {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(uint **)(DAT_00573490 + -0xc + ((int)uVar3 >> 2) * 4) = puVar4;
        uVar3 = *puVar1;
        *(uint **)(uVar3 + 4) = puVar4;
        *puVar4 = uVar3;
      }
      *puVar1 = puVar1[2] | 2;
      _DAT_00573424 = _DAT_00573424 + 1;
      _DAT_00573428 = _DAT_00573428 + (uVar5 - 4);
      FUN_004038cc();
      return puVar1 + 1;
    }
  }
  if ((int)uVar5 <= DAT_00573488) {
    DAT_00573488 = DAT_00573488 - uVar5;
    if (DAT_00573488 < 0xc) {
      uVar5 = uVar5 + DAT_00573488;
      DAT_00573488 = 0;
    }
    DAT_0057348c = (uint *)((int)DAT_0057348c + uVar5);
    *puVar4 = uVar5 | 2;
    _DAT_00573424 = _DAT_00573424 + 1;
    _DAT_00573428 = _DAT_00573428 + (uVar5 - 4);
    FUN_004038cc();
    return puVar4 + 1;
  }
  FUN_00402134(uVar5);
  puVar4 = (uint *)0x0;
  *in_FS_OFFSET = uStack_24;
  if (DAT_00573049 != '\0') {
    uStack_24 = 0x40239b;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  return puVar4;
}

