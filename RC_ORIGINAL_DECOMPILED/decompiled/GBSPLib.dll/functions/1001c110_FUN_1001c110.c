/*
 * FUN_1001c110 at 1001c110
 * undefined FUN_1001c110(void)
 * Address ranges: 1001c110-1001c1d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001c110(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  int local_4;
  
  iVar1 = FUN_10014a00(8);
  if (iVar1 == 0) {
    FUN_10015fb0(0x5d,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x236,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_10014310(local_4 + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_10015fb0(0x5b,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x23d,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  puVar2[1] = puVar2;
  *puVar2 = local_8;
  iVar1 = FUN_10014a00(local_4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x5d,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x245,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  return puVar2;
}

