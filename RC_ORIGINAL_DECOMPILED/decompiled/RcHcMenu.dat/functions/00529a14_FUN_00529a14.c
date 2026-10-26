/*
 * FUN_00529a14 at 00529a14
 * undefined __register FUN_00529a14(int * param_1)
 * Address ranges: 00529a14-00529c06;00529c0e-00529c12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00529a14(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcVar5;
  char *pcVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_10;
  char local_a;
  char local_9;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x529a26;
  local_8 = param_1;
  uVar2 = FUN_00529294((int)param_1);
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x529a3c;
    cVar1 = (**(code **)(*(int *)local_8[0xa4] + 100))();
    if (cVar1 == '\0') {
      puStack_18 = (undefined1 *)0x529a4c;
      FUN_00529720((uint)local_8);
      puStack_18 = (undefined1 *)0x529a54;
      FUN_005231cc((uint)local_8);
      puStack_18 = (undefined1 *)0x529a62;
      FUN_0054b510(local_8[0xa4]);
      local_10 = (int *)0x0;
      puStack_1c = &LAB_00529c07;
      uStack_20 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_20;
      if (*(char *)((int)local_8 + 0x22d) == '\0') {
        local_9 = '\0';
        local_a = '\0';
        if (*(short *)((int)local_8 + 0x2c2) == 0) {
          local_9 = '\x01';
          local_a = '\x01';
          puStack_18 = &stack0xfffffffc;
        }
        else {
          pcVar6 = &local_9;
          pcVar5 = &local_a;
          puStack_18 = &stack0xfffffffc;
          uVar2 = FUN_00549b80(local_8[0xa4]);
          (*(code *)local_8[0xb0])(local_8[0xb1],local_8,uVar2,pcVar5,pcVar6);
        }
        if ((local_9 != '\0') || (local_a != '\0')) {
          FUN_00549344((int *)local_8[0xa4]);
        }
      }
      else {
        puStack_18 = &stack0xfffffffc;
        piVar3 = (int *)FUN_00549b64(local_8[0xa4]);
        local_10 = (int *)FUN_0049206c(piVar3);
        local_9 = '\0';
        local_a = '\0';
        iVar4 = FUN_005285b8(local_8);
        cVar1 = FUN_00516520(*(int *)(iVar4 + 0x208),&local_10);
        while (cVar1 != '\0') {
          if ((local_a == '\0') && (*(short *)((int)local_8 + 0x2c2) != 0)) {
            (*(code *)local_8[0xb0])(local_8[0xb1],local_8,local_10,&local_a,&local_9);
          }
          else {
            local_9 = '\x01';
            local_a = '\x01';
          }
          if ((local_9 != '\0') || (local_a != '\0')) {
            piVar3 = (int *)(**(code **)(*(int *)local_8[0xa4] + 0xc))();
            FUN_004d4718(piVar3,local_10,'\0');
          }
          iVar4 = FUN_005285b8(local_8);
          cVar1 = FUN_0051659c(*(int *)(iVar4 + 0x208),&local_10);
        }
        FUN_00549a9c((int *)local_8[0xa4]);
        FUN_00549a28((int *)local_8[0xa4]);
        iVar4 = FUN_005285b8(local_8);
        FUN_00523f00(iVar4);
      }
      piVar3 = (int *)FUN_005285b8(local_8);
      (**(code **)(*piVar3 + 0xcc))();
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x529c0e;
      puStack_1c = (undefined1 *)0x529be8;
      FUN_00403094(local_10);
      puStack_1c = (undefined1 *)0x529bf6;
      FUN_0054b528((int *)local_8[0xa4]);
      puStack_1c = (undefined1 *)0x529bfe;
      FUN_00523060(local_8);
      puStack_1c = (undefined1 *)0x529c06;
      FUN_00529758(local_8);
      return;
    }
  }
  return;
}

