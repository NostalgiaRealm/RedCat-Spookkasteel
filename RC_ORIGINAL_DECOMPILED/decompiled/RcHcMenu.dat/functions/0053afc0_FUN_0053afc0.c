/*
 * FUN_0053afc0 at 0053afc0
 * undefined __register FUN_0053afc0(int * param_1)
 * Address ranges: 0053afc0-0053b1cd;0053b1d5-0053b20c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053afc0(int *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  byte *pbStack_130;
  char *pcStack_12c;
  char *pcStack_128;
  undefined1 *puStack_124;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0053b20d;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0xb4) & 4) != 0) {
    puStack_124 = (undefined1 *)0x53affa;
    cVar3 = FUN_005387bc(param_1);
    puVar2 = puStack_118;
    if (cVar3 != '\0') {
      if ((char)local_8[0xb6] == '\x01') {
        puStack_124 = (undefined1 *)0x53b016;
        FUN_0053b274(local_8);
      }
      if ((char)local_8[0xb6] != '\0') {
        puStack_124 = (undefined1 *)0x53b032;
        FUN_00402fe0(*local_8,local_114);
        puStack_124 = (undefined1 *)0x53b040;
        FUN_00403fd4(&local_14,local_114);
        puStack_124 = (undefined1 *)local_14;
        pcStack_128 = ".Insert: ";
        pcStack_12c = "OAGrid not in browse mode.";
        pbStack_130 = (byte *)0x53b05a;
        FUN_004040f0(&local_10,3);
        pbStack_130 = (byte *)0x53b06c;
        FUN_00403d94(local_10);
      }
      pbStack_130 = (byte *)0x53b074;
      iVar4 = FUN_0053881c(local_8);
      pbStack_130 = (byte *)0x53b07e;
      iVar4 = FUN_00538980(local_8,iVar4);
      pbStack_130 = (byte *)0x53b088;
      FUN_005390e0((int)local_8,iVar4);
      pbStack_130 = (byte *)0x53b090;
      uVar5 = FUN_00529294((int)local_8);
      puVar2 = puStack_118;
      if ((char)uVar5 != '\0') {
        if (*(char *)(local_8[0xa4] + 0x10) != '\x01') {
          pbStack_130 = (byte *)0x53b170;
          FUN_00549158((int *)local_8[0xa4]);
          pbStack_130 = (byte *)0x53b17e;
          piVar6 = (int *)FUN_00549b80(local_8[0xa4]);
          pbStack_130 = (byte *)0x53b188;
          FUN_0053aa08(local_8,piVar6);
          *(undefined1 *)(local_8 + 0xb6) = 2;
          pbStack_130 = (byte *)0x53b19a;
          FUN_00529720((uint)local_8);
          puStack_134 = &LAB_0053b1ce;
          uStack_138 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_138;
          pbStack_130 = &stack0xfffffffc;
          piVar6 = (int *)FUN_00538860(local_8);
          (**(code **)(*piVar6 + 0xcc))();
          *in_FS_OFFSET = uStack_138;
          pbStack_130 = (byte *)0x53b1d5;
          puStack_134 = (undefined1 *)0x53b1cd;
          FUN_00529758(local_8);
          return;
        }
        *(undefined1 *)((int)local_8 + 0x2d2) = 0;
        if (*(char *)((int)local_8 + 0x2d1) == '\0') {
          pbStack_130 = (byte *)0x53b0cb;
          FUN_005390fc(local_8,'\x01');
          *(undefined1 *)((int)local_8 + 0x2d2) = 1;
        }
        pbStack_130 = (byte *)0x53b0e3;
        FUN_00549158((int *)local_8[0xa4]);
        pbStack_130 = (byte *)0x53b0f1;
        piVar6 = (int *)FUN_00549b80(local_8[0xa4]);
        pbStack_130 = (byte *)0x53b0fb;
        FUN_0053aa08(local_8,piVar6);
        pbStack_130 = (byte *)0x53b103;
        iVar4 = FUN_00538fbc(local_8);
        pbStack_130 = *(byte **)(iVar4 + 0x200);
        puStack_134 = (undefined1 *)0x53b112;
        piVar6 = (int *)FUN_00538e94(local_8);
        pbVar1 = pbStack_130;
        pbStack_130 = (byte *)0x53b118;
        iVar4 = FUN_005375c0(piVar6,(uint)pbVar1);
        pbStack_130 = (byte *)(iVar4 + 0x44);
        puStack_134 = (undefined1 *)0x53b12a;
        piVar6 = (int *)FUN_00549b80(local_8[0xa4]);
        pbVar1 = pbStack_130;
        pbStack_130 = (byte *)0x53b130;
        local_c = (int *)FUN_00494c5c(piVar6,pbVar1);
        pbStack_130 = (byte *)0x53b141;
        uVar5 = FUN_0040320c(local_c,(int)&PTR_FUN_004897ec);
        if ((char)uVar5 != '\0') {
          pbStack_130 = (byte *)0x53b156;
          (**(code **)(*local_c + 0x38))(local_c,local_8[0xb7]);
        }
        *(undefined1 *)(local_8 + 0xb6) = 3;
        pbStack_130 = (byte *)0x53b1dd;
        piVar6 = (int *)FUN_00538b6c(local_8);
        pbStack_130 = (byte *)0x53b1e2;
        FUN_00493be4(piVar6);
        pbStack_130 = (byte *)0x53b1ea;
        FUN_0053970c(local_8);
        pbStack_130 = (byte *)0x53b1f2;
        FUN_00539d5c(local_8);
        puVar2 = puStack_118;
      }
    }
  }
  puStack_118 = puVar2;
  *in_FS_OFFSET = pcStack_12c;
  puStack_124 = &LAB_0053b214;
  pcStack_128 = (char *)0x53b20c;
  FUN_00403dd4(&local_14,2);
  return;
}

