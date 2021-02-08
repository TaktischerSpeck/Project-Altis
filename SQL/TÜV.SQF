ALTER TABLE `vehicles`
	ADD COLUMN `tuned` tinyint NOT NULL DEFAULT '0' AFTER `insert_time`,
	ADD COLUMN `engine` tinyint NOT NULL DEFAULT '0' AFTER `tuned`,
	ADD COLUMN `transmission` tinyint NOT NULL DEFAULT '0' AFTER `engine`,
	ADD COLUMN `brakes` tinyint NOT NULL DEFAULT '0' AFTER `transmission`,
	ADD COLUMN `springs` tinyint NOT NULL DEFAULT '0' AFTER `brakes`,
	ADD COLUMN `foil` tinyint NOT NULL DEFAULT '0' AFTER `springs`,
	ADD COLUMN `tuevinfo` text AFTER `foil`,
	ADD COLUMN `tuevchecker` text AFTER `tuevinfo`,
	ADD COLUMN `tuevactive` tinyint DEFAULT '0' AFTER `tuevchecker`,
	ADD COLUMN `tuevdate` timestamp AFTER `tuevactive`;
