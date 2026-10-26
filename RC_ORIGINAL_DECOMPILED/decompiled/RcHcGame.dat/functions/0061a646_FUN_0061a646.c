/*
 * FUN_0061a646 at 0061a646
 * undefined FUN_0061a646(void)
 * Address ranges: 0061a646-0061a849
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0061a646(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  char local_7c [120];
  
  iVar1 = FUN_0061ac37(param_1);
  iVar2 = (*DAT_007101c4)(iVar1,(-(uint)(DAT_007101a8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_007101bc = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_007101b8,local_7c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_007101c4)(iVar1,(-(uint)(DAT_007101b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_007101bc = 0;
      return 1;
    }
    iVar2 = __strcmpi(DAT_007101b4,local_7c);
    if (iVar2 == 0) {
      DAT_007101bc = DAT_007101bc | 0x304;
      DAT_007101c0 = iVar1;
LAB_0061a6ec:
      DAT_007101a4 = iVar1;
    }
    else if ((DAT_007101bc & 2) == 0) {
      if ((DAT_007101ac == 0) ||
         (iVar2 = FUN_0060d260(DAT_007101b4,local_7c,DAT_007101ac), iVar2 != 0)) {
        if (((DAT_007101bc & 1) == 0) && (iVar2 = FUN_0061aa9a(iVar1), iVar2 != 0)) {
          DAT_007101bc = DAT_007101bc | 1;
          DAT_007101c0 = iVar1;
        }
      }
      else {
        DAT_007101bc = DAT_007101bc | 2;
        DAT_007101c0 = iVar1;
        sVar3 = _strlen(DAT_007101b4);
        if (sVar3 == DAT_007101ac) goto LAB_0061a6ec;
      }
    }
  }
  if ((DAT_007101bc & 0x300) == 0x300) goto LAB_0061a836;
  iVar2 = (*DAT_007101c4)(iVar1,(-(uint)(DAT_007101b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_007101bc = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_007101b4,local_7c);
  if (iVar2 == 0) {
    DAT_007101bc = DAT_007101bc | 0x200;
    if (((DAT_007101b0 == 0) && (DAT_007101ac != 0)) &&
       (sVar3 = _strlen(DAT_007101b4), sVar3 == DAT_007101ac)) {
      uVar4 = 1;
      goto LAB_0061a815;
    }
  }
  else {
    if (((DAT_007101b0 != 0) || (DAT_007101ac == 0)) ||
       (iVar2 = FUN_0060d260(DAT_007101b4,local_7c,DAT_007101ac), iVar2 != 0)) goto LAB_0061a836;
    uVar4 = 0;
LAB_0061a815:
    iVar2 = FUN_0061aab9(iVar1,uVar4);
    if (iVar2 == 0) goto LAB_0061a836;
  }
  DAT_007101bc = DAT_007101bc | 0x100;
  if (DAT_007101a4 == 0) {
    DAT_007101a4 = iVar1;
  }
LAB_0061a836:
  return ~DAT_007101bc >> 2 & 1;
}

