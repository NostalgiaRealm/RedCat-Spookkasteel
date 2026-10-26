/*
 * FUN_00566768 at 00566768
 * undefined __register FUN_00566768(undefined4 param_1, int * param_2)
 * Address ranges: 00566768-0056686c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00566768(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x30))(param_2,"Display","Gamma",0,0x3ff00000);
  if (*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x2c) == 0) {
    (**(code **)(*param_2 + 0xc))(param_2,"Display","SoftwareOnly",1);
  }
  else {
    (**(code **)(*param_2 + 0xc))(param_2,"Display","SoftwareOnly",0);
  }
  (**(code **)(*param_2 + 0xc))(param_2,"Display","Effects",3);
  (**(code **)(*param_2 + 0xc))
            (param_2,"Display",&DAT_005668c0,
             *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x2c));
  (**(code **)(*param_2 + 0x14))(param_2,"Sound","Allowed",1);
  (**(code **)(*param_2 + 0xc))
            (param_2,"Sound","MusicVolume",
             *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18));
  (**(code **)(*param_2 + 0xc))
            (param_2,"Sound","SoundVolume",
             *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x10));
  return;
}

