/*
 * FUN_00407794 at 00407794
 * undefined __register FUN_00407794(void)
 * Address ranges: 00407794-0040787b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407794(void)

{
  WORD WVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0040787c;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar3 = _DAT_0057342c == 0;
  _DAT_0057342c = _DAT_0057342c + -1;
  if (bVar3) {
    DAT_00573038 = 0;
    DAT_00573040 = 0;
    _DAT_00573044 = 0;
    DAT_0057304a = 2;
    DAT_0057304b = 2;
    DAT_0057304c = 3;
    _DAT_005733f4 = 0;
    _DAT_00573404 = 1;
    _DAT_00573414 = 10;
    _DAT_0057341c = 0x80020004;
    DAT_005733e8 = thunk_FUN_00402874;
    DAT_005733ec = thunk_FUN_00402874;
    _DAT_005733f0 = thunk_FUN_00402874;
    uVar2 = FUN_00402ecc();
    if ((char)uVar2 != '\0') {
      FUN_00402efc();
    }
    FUN_00402fc0();
    FUN_00406dc2((undefined4 *)&DAT_00573050,"");
    FUN_00406dc2((undefined4 *)&DAT_0057321c,"");
    _DAT_00573030 = GetCommandLineA();
    WVar1 = FUN_00401464();
    DAT_0057302c = CONCAT22(extraout_var,WVar1);
    DAT_00573024 = GetCurrentThreadId();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

