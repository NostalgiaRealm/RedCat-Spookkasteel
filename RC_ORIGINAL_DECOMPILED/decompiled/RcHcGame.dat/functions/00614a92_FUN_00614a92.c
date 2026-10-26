/*
 * FUN_00614a92 at 00614a92
 * undefined FUN_00614a92(void)
 * Address ranges: 00614a92-00614c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00614a92(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_00614df0(param_2);
  iVar1 = FUN_00615028();
  if ((iVar1 == 0) || (*DAT_00710054 == '\0')) {
    iVar1 = FUN_00615028();
    if (iVar1 != 0) {
      puVar3 = local_c;
      puVar4 = local_34;
      FUN_00614fc6(2);
      uVar2 = FUN_006151fc(puVar4,puVar3);
      FUN_00614df0(uVar2);
      FUN_006154c8(local_14);
    }
  }
  else {
    uVar2 = FUN_00614c3f(local_1c);
    FUN_00614df0(uVar2);
    puVar3 = local_c;
    puVar4 = local_24;
    FUN_0061517e(local_2c,0x20);
    uVar2 = FUN_006151fc(puVar4,puVar3);
    FUN_006154c8(uVar2);
    iVar1 = FUN_00615028();
    if (iVar1 != 0) {
      if (*DAT_00710054 != '@') {
        pcVar5 = "{for ";
        do {
          FUN_00615307(pcVar5);
          do {
            iVar1 = FUN_00615028();
            if (((iVar1 == 0) || (*DAT_00710054 == '\0')) || (*DAT_00710054 == '@')) {
              iVar1 = FUN_00615028();
              if (iVar1 != 0) {
                if (*DAT_00710054 == '\0') {
                  FUN_006153d7(2);
                }
                FUN_006152a2(0x7d);
              }
              goto LAB_00614be2;
            }
            uVar2 = FUN_00611a1e(local_2c);
            puVar3 = local_24;
            FUN_00614dcd(0x60);
            uVar2 = FUN_006151fc(puVar3,uVar2);
            FUN_00614df0(uVar2);
            uVar2 = FUN_0061517e(local_34,0x27);
            FUN_00615373(uVar2);
            if (*DAT_00710054 == '@') {
              DAT_00710054 = DAT_00710054 + 1;
            }
            iVar1 = FUN_00615028();
          } while ((iVar1 == 0) || (*DAT_00710054 == '@'));
          pcVar5 = "s ";
        } while( true );
      }
LAB_00614be2:
      if (*DAT_00710054 == '@') {
        DAT_00710054 = DAT_00710054 + 1;
      }
    }
  }
  FUN_00614df0(local_c);
  return param_1;
}

