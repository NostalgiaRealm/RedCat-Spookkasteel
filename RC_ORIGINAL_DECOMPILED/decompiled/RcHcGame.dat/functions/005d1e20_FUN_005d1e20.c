/*
 * FUN_005d1e20 at 005d1e20
 * undefined FUN_005d1e20(void)
 * Address ranges: 005d1e20-005d1ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005d1e20(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  int local_4;
  
  iVar1 = FUN_005cd390(8);
  if (iVar1 == 0) {
    FUN_005cf220(0x5d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x237,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_005cf3b0(local_4 + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_005cf220(0x5b,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x23e,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar2[1] = puVar2;
  *puVar2 = local_8;
  iVar1 = FUN_005cd390(local_4);
  if (iVar1 == 0) {
    FUN_005cf220(0x5d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x246,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  return puVar2;
}

