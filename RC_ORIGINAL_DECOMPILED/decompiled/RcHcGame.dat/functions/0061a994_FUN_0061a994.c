/*
 * FUN_0061a994 at 0061a994
 * undefined FUN_0061a994(void)
 * Address ranges: 0061a994-0061aa19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0061a994(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char local_7c [120];
  
  uVar1 = FUN_0061ac37(param_1);
  iVar2 = (*DAT_007101c4)(uVar1,(-(uint)(DAT_007101a8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_007101bc = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = __strcmpi(DAT_007101b8,local_7c);
    if (iVar2 == 0) {
      iVar2 = FUN_0061aa9a(uVar1);
      if (iVar2 != 0) {
        DAT_007101bc = DAT_007101bc | 4;
        DAT_007101a4 = uVar1;
        DAT_007101c0 = uVar1;
      }
    }
    uVar3 = ~DAT_007101bc >> 2 & 1;
  }
  return uVar3;
}

