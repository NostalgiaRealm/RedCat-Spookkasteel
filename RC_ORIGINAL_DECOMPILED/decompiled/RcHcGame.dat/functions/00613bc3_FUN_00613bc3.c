/*
 * FUN_00613bc3 at 00613bc3
 * undefined FUN_00613bc3(void)
 * Address ranges: 00613bc3-00613cd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00613bc3(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (((~DAT_00710064 & 0x8000) == 0) || ((DAT_00710064 & 0x1000) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_00614dc3();
  pcVar5 = DAT_00710054;
  cVar1 = *DAT_00710054;
  DAT_00710054 = DAT_00710054 + 1;
  if (cVar1 == '\0') {
    DAT_00710054 = pcVar5;
    FUN_00614e92("nknown ecsu\'");
    return param_1;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else {
    if (cVar1 != 'V') {
      if (cVar1 == 'W') {
        uVar3 = ~DAT_00710064 >> 0xf & 1;
        uVar2 = FUN_00613cd2(local_24);
        puVar4 = local_2c;
        FUN_00614e92("enum ");
        uVar2 = FUN_006151fc(puVar4,uVar2);
        FUN_00614df0(uVar2);
        FUN_006154c8(local_1c);
      }
      goto LAB_00613c74;
    }
    pcVar5 = s_class_006b10b4;
  }
  FUN_006154a5(pcVar5);
LAB_00613c74:
  FUN_00614dc3();
  if (uVar3 != 0) {
    FUN_006154c8(local_c);
  }
  uVar2 = FUN_006131f1(local_34);
  FUN_00614df0(uVar2);
  FUN_00615373(local_1c);
  FUN_00614df0(local_14);
  return param_1;
}

