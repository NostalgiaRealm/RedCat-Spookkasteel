/*
 * FUN_00539ae4 at 00539ae4
 * undefined __register FUN_00539ae4(int * param_1, int param_2)
 * Address ranges: 00539ae4-00539cac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00539ae4(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int local_12c;
  int local_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_128 = 0;
  local_12c = 0;
  local_20 = 0;
  local_24 = 0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  puStack_138 = &LAB_00539cad;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00538b6c(param_1);
  local_10 = FUN_00494c5c(local_14,(byte *)(local_c + 0x44));
  piVar2 = FUN_00406aa0((int *)&local_1c);
  cVar1 = FUN_00403128(local_14,(int *)&DAT_00539cbc,piVar2);
  if (cVar1 == '\0') {
    piVar2 = FUN_00406aa0((int *)&local_18);
    FUN_00403128(*(int **)(local_c + 0x68),(int *)&DAT_00539ccc,piVar2);
    if (local_18 == (int *)0x0) {
      FUN_00402fe0(*local_8,local_124);
      FUN_00403fd4(&local_12c,local_124);
      FUN_004040f0(&local_128,3);
      FUN_00403d94(local_128);
    }
    (**(code **)(*local_18 + 0x40))(local_18,0);
  }
  else {
    (**(code **)(*local_1c + 0x30))(local_1c,*(undefined4 *)(local_c + 0x68),local_10);
    piVar2 = FUN_00406aa0((int *)&local_18);
    FUN_00403128(*(int **)(local_c + 0x68),(int *)&DAT_00539ccc,piVar2);
    if (local_18 == (int *)0x0) {
      FUN_00402fe0(*local_8,local_124);
      FUN_00403fd4(&local_24,local_124);
      FUN_004040f0(&local_20,3);
      FUN_00403d94(local_20);
    }
    (**(code **)(*local_18 + 0x40))(local_18,0);
    (**(code **)(*local_1c + 0x34))(local_1c,*(undefined4 *)(local_c + 0x68),local_10);
  }
  *in_FS_OFFSET = uStack_13c;
  puStack_134 = &LAB_00539cb4;
  puStack_138 = (undefined1 *)0x539c8f;
  FUN_00403dd4(&local_12c,2);
  puStack_138 = (undefined1 *)0x539c9c;
  FUN_00403dd4(&local_24,2);
  puStack_138 = (undefined1 *)0x539ca4;
  FUN_00406aa0((int *)&local_1c);
  puStack_138 = (undefined1 *)0x539cac;
  FUN_00406aa0((int *)&local_18);
  return;
}

