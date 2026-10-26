/*
 * FUN_0061a8a0 at 0061a8a0
 * undefined FUN_0061a8a0(void)
 * Address ranges: 0061a8a0-0061a95c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0061a8a0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char local_7c [120];
  
  uVar1 = FUN_0061ac37(param_1);
  iVar2 = (*DAT_007101c4)(uVar1,(-(uint)(DAT_007101b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_007101bc = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_007101b4,local_7c);
  if (iVar2 == 0) {
    if (DAT_007101b0 == 0) {
      uVar3 = 1;
      goto LAB_0061a92c;
    }
  }
  else {
    if (((DAT_007101b0 != 0) || (DAT_007101ac == 0)) ||
       (iVar2 = FUN_0060d260(DAT_007101b4,local_7c,DAT_007101ac), iVar2 != 0)) goto LAB_0061a94b;
    uVar3 = 0;
LAB_0061a92c:
    iVar2 = FUN_0061aab9(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_0061a94b;
  }
  DAT_007101bc = DAT_007101bc | 4;
  DAT_007101a4 = uVar1;
  DAT_007101c0 = uVar1;
LAB_0061a94b:
  return ~DAT_007101bc >> 2 & 1;
}

